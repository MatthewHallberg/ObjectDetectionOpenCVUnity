using System;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Events;

public class NativeLibAdapter : MonoBehaviour {

#if UNITY_EDITOR
    [DllImport("macPlugin")]
    private static extern int InitOpenCV(string labels, string pathToConfig, string pathToWeights);
    [DllImport("macPlugin")]
    private static extern IntPtr ProcessImageOpenCV(byte[] bytes, int width, int height, int detectionInterval, int rotation);
#elif PLATFORM_IOS
    [DllImport("__Internal")]
    private static extern int InitOpenCV(string labels, string pathToConfig, string pathToWeights);
    [DllImport("__Internal")]
    private static extern IntPtr ProcessImageOpenCV(byte[] bytes, int width, int height, int detectionInterval, int rotation);
#else
    [DllImport("macPlugin")]
    private static extern int InitOpenCV(string labels, string pathToConfig, string pathToWeights);
    [DllImport("macPlugin")]
    private static extern IntPtr ProcessImageOpenCV(byte[] bytes, int width, int height, int detectionInterval, int rotation);
#endif

    public void InitPlugin(string labels, string pathToConfig, string pathToWeights) {
        int output = InitOpenCV(labels, pathToConfig, pathToWeights);
        Debug.Log(output + " Classes Loaded!");
    }

    public void ProcessImageCV(Texture2D tex, int rotation, UnityAction<string,float,float> callback) {
        GC.Collect();
        StartCoroutine(DetectRoutine(tex, rotation, callback));
    }

    IEnumerator DetectRoutine(Texture2D tex, int rotation, UnityAction<string, float, float> callback) {
        IntPtr pStr = ProcessImageOpenCV(tex.GetRawTextureData(), tex.width, tex.height, 30, rotation);
        string output = Marshal.PtrToStringAnsi(pStr);
        callback(output,tex.width,tex.height);
        yield return null;
    }
}