using System;
using System.Runtime.InteropServices;

public static class NativeLibAdapter {

#if UNITY_EDITOR
    [DllImport("macPlugin")]
    private static extern void Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("macPlugin")]
    private static extern IntPtr ProcessImage(byte[] image, int width, int height, bool isRGBA, int detectionInterval);
#elif PLATFORM_IOS
    [DllImport("__Internal")]
    private static extern void Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("__Internal")]
    private static extern IntPtr ProcessImage(byte[] image, int width, int height, bool isRGBA, int detectionInterval);
#else
    [DllImport("androidPlugin")]
    private static extern void Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("androidPlugin")]
    private static extern IntPtr ProcessImage(byte[] image, int width, int height, bool isRGBA, int detectionInterval);
#endif

    public static void InitPlugin(string labels, string pathToConfig, string pathToWeights) {
        Init(labels,pathToConfig,pathToWeights);
    }

    public static string DetectObjects(byte[] image, int width, int height, bool isRGBA, int detectionInterval) {
        var result = ProcessImage(image,width,height,isRGBA,detectionInterval);
        return Marshal.PtrToStringAnsi(result);
    }
}