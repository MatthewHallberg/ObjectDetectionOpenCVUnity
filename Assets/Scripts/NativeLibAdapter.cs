using System;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;

public class NativeLibAdapter : MonoBehaviour {

#if UNITY_EDITOR
    [DllImport("macPlugin")]
    private static extern int InitOpenCV(string labels, string pathToConfig, string pathToWeights);
    [DllImport("macPlugin")]
    private static extern IntPtr ProcessImageOpenCV(byte[] bytes, int width, int height, int detectionInterval);
    [DllImport("macPlugin")]
    private static extern void SetViewTextureFromUnity(IntPtr texture, int w, int h);
    [DllImport("macPlugin")]
    private static extern IntPtr GetRenderEventFunc();
#elif PLATFORM_IOS
    [DllImport("__Internal")]
    private static extern int InitOpenCV(string labels, string pathToConfig, string pathToWeights);
    [DllImport("__Internal")]
    private static extern IntPtr ProcessImageOpenCV(byte[] bytes, int width, int height, int detectionInterval);
    [DllImport("__Internal")]
    private static extern void SetViewTextureFromUnity(IntPtr texture, int w, int h);
    [DllImport("__Internal")]
    private static extern IntPtr GetRenderEventFunc();
#else
    [DllImport("androidPlugin")]
    private static extern int Init(string labels, string pathToConfig, string pathToWeights);
    [DllImport("androidPlugin")]
    private static extern IntPtr ProcessImage(IntPtr buffer, int width, int height, bool isRGBA, int detectionInterval);
#endif

    public void InitPlugin(string labels, string pathToConfig, string pathToWeights) {
        int output = InitOpenCV(labels, pathToConfig, pathToWeights);
        Debug.Log(output + " Classes Loaded!");
    }

    public void PassViewTextureToPlugin(Texture2D tex) {
        // Pass texture pointer to the plugin
        SetViewTextureFromUnity(tex.GetNativeTexturePtr(), tex.width, tex.height);
    }

    public void StartOnRenderEvent() {
        StartCoroutine(CallPluginAtEndOfFrames());
    }

    IEnumerator CallPluginAtEndOfFrames() {
        yield return new WaitForSeconds(.5f);
        while (true) {
            // Wait until all frame rendering is done
            yield return new WaitForEndOfFrame();
            GL.IssuePluginEvent(GetRenderEventFunc(), 1);
        }
    }

    public void ProcessImageCV(Texture2D tex) {
        IntPtr output = ProcessImageOpenCV(tex.GetRawTextureData(), tex.width, tex.height, 15);
        string data = Marshal.PtrToStringAnsi(output);
        if (data.Length > 0) {
            Debug.Log(data);
        }
    }
}