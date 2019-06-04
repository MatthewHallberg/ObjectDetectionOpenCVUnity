using System;
using System.Runtime.InteropServices;

public static class NativeLibAdapter {

#if UNITY_EDITOR
    [DllImport("opencvPlugin")]
    private static extern void Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("opencvPlugin")]
    private static extern IntPtr ProcessImage(byte[] image, int width, int height, bool isRGBA, int detectionInterval);
#elif PLATFORM_IOS
    [DllImport("OpenCVPlugin")]
    private static extern int ProcessImage();
#else
    [DllImport("OpenCVPlugin")]
    private static extern int ProcessImage();
#endif

    public static void InitPlugin(string labels, string pathToConfig, string pathToWeights) {
        Init(labels,pathToConfig,pathToWeights);
    }

    public static string DetectObjects(byte[] image, int width, int height, bool isRGBA, int detectionInterval) {
    var result = ProcessImage(image,width,height,isRGBA,detectionInterval);
        return Marshal.PtrToStringAnsi(result);
    }
}