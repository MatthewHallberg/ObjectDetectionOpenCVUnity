using System;
using System.Runtime.InteropServices;
using System.Text;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

public class NativeLibAdapter : MonoBehaviour {

    public struct OpencvJob : IJob {
        public NativeArray<byte> image;
        public int width;
        public int height;
        public NativeArray<float> outputData;

        public void Execute() {
            byte[] imageBytes = image.ToArray();
            IntPtr pStr = ProcessImage(imageBytes, width, height, false, 15);
            Debug.Log(Marshal.PtrToStringAnsi(pStr));
            //byte[] output = Encoding.ASCII.GetBytes(Marshal.PtrToStringAnsi(pStr));

            outputData[0] = 10f;
        }
    }

#if UNITY_EDITOR
    [DllImport("macPlugin")]
    private static extern int Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("macPlugin")]
    private static extern IntPtr ProcessImage(byte[] bytes, int width, int height, bool isRGBA, int detectionInterval);
#elif PLATFORM_IOS
    [DllImport("__Internal")]
    private static extern int Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("__Internal")]
    private static extern IntPtr ProcessImage(IntPtr buffer, int width, int height, bool isRGBA, int detectionInterval);
#else
    [DllImport("androidPlugin")]
    private static extern int Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("androidPlugin")]
    private static extern IntPtr ProcessImage(IntPtr buffer, int width, int height, bool isRGBA, int detectionInterval);
#endif

    public void InitPlugin(string labels, string pathToConfig, string pathToWeights) {
        int classes = Init(labels, pathToConfig, pathToWeights);
        Debug.Log(classes + " classes loaded from plugin");
    }

    public string DetectObjects(byte[] bytes, int width, int height, bool isRGBA, int detectionInterval) {

        NativeArray<byte> ImageArrary = new NativeArray<byte>(bytes, Allocator.TempJob);
        NativeArray<float> result = new NativeArray<float>(1, Allocator.TempJob);

        OpencvJob job = new OpencvJob {
            image = ImageArrary,
            width = width,
            height = height,
            outputData = result
        };

        JobHandle handle = job.Schedule();

        // Wait for the job to complete
        handle.Complete();
        float output = result[0];

        result.Dispose();
        ImageArrary.Dispose();
        return "";
    }
}