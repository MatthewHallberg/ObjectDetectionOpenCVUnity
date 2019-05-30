using System;
using System.Runtime.InteropServices;
using UnityEngine;

public class NativeLibAdapter {

#if UNITY_EDITOR
    [DllImport("opencvPlugin")]
    private static extern IntPtr ProcessImage(Color32[] image, int width, int height);
#elif PLATFORM_IOS
    [DllImport("OpenCVPlugin")]
    private static extern int ProcessImage();
#else
    [DllImport("OpenCVPlugin")]
    private static extern int ProcessImage();
#endif

    public static string DetectObjects(Color32[] image,int width, int height) {
        var result = ProcessImage(image,width,height);
        return Marshal.PtrToStringAnsi(result);
    }
}