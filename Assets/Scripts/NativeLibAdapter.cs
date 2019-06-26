using System;
using System.Collections;
using System.Runtime.InteropServices;
using System.Text;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

public class NativeLibAdapter : MonoBehaviour {

    public OpenCV openCV;

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

    public void DetectObjects(byte[] bytes, int width, int height) {
        StartCoroutine(DetectRoutine(bytes, width, height));
    }

    IEnumerator DetectRoutine(byte[] bytes, int width, int height) {
        OpencvJob job = new OpencvJob {
            image = new NativeArray<byte>(bytes, Allocator.TempJob),
            width = width,
            height = height
        };

        JobHandle handle = job.Schedule();

        while (handle.IsCompleted) {
            yield return new WaitForEndOfFrame();
        }

        //get rid of old image
        handle.Complete();
        job.image.Dispose();

        //get result
        string detections = Encoding.UTF8.GetString(detectionBytes);
        openCV.OnDetectionResult(detections);
    }

    static byte[] detectionBytes;

    public struct OpencvJob : IJob {
        public NativeArray<byte> image;
        public int width;
        public int height;

        public void Execute() {
            byte[] imageBytes = image.ToArray();
            IntPtr pStr = ProcessImage(imageBytes, width, height, false, 15);
            detectionBytes = Encoding.UTF8.GetBytes(Marshal.PtrToStringAnsi(pStr));
        }
    }
}