using System;
using System.Runtime.InteropServices;
using UnityEngine;

public class NativeLibAdapter : MonoBehaviour {

#if UNITY_EDITOR
    [DllImport("macPlugin")]
    private static extern void Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("macPlugin")]
    private static extern IntPtr ProcessImage(IntPtr buffer, int width, int height, bool isRGBA, int detectionInterval);
#elif PLATFORM_IOS
    [DllImport("__Internal")]
    private static extern void Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("__Internal")]
    private static extern IntPtr ProcessImage(IntPtr buffer, int width, int height, bool isRGBA, int detectionInterval);
#else
    [DllImport("androidPlugin")]
    private static extern void Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("androidPlugin")]
    private static extern IntPtr ProcessImage(IntPtr buffer, int width, int height, bool isRGBA, int detectionInterval);
#endif

    IntPtr imgPtr;
    int _marshalledSize;

    public void InitPlugin(string labels, string pathToConfig, string pathToWeights) {
        Init(labels, pathToConfig, pathToWeights);
    }

    public string DetectObjects(byte[] bytes, int width, int height, bool isRGBA, int detectionInterval) {
        MarshalTexture(bytes);
        var result = ProcessImage(imgPtr, width, height, isRGBA, detectionInterval);
        return Marshal.PtrToStringAnsi(result);
    }

    private void OnApplicationQuit() {
        Marshal.FreeHGlobal(imgPtr);
    }

    void MarshalTexture(byte[] bytes) {
        int size = Marshal.SizeOf(bytes[0]) * bytes.Length;
        if (_marshalledSize < 1) {
            Debug.Log("Free old marshalled buffer");
            Marshal.FreeHGlobal(imgPtr);
            imgPtr = Marshal.AllocHGlobal(size);
            _marshalledSize = size;
            Debug.Log("Created new marshalled buffer");
        }

        Marshal.Copy(bytes, 0, imgPtr, bytes.Length);
    }
}