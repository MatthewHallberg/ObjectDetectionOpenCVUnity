using System;
using System.Runtime.InteropServices;
using UnityEngine;

public class NativeLibAdapter : MonoBehaviour {

#if UNITY_EDITOR
    [DllImport("macPlugin")]
    private static extern int Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("macPlugin")]
    private static extern IntPtr ProcessImage(byte[] buffer, int width, int height, bool isRGBA, int detectionInterval);
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
        IntPtr pStr = ProcessImage(bytes, width, height, isRGBA, detectionInterval);
        return Marshal.PtrToStringAnsi(pStr);
    }
}