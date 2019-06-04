using UnityEngine;
using Vuforia;

public class CameraFeedBehavior : MonoBehaviour {

    PIXEL_FORMAT mPixelFormat = PIXEL_FORMAT.UNKNOWN_FORMAT;
    
    void Start() {
    
    #if UNITY_EDITOR
            mPixelFormat = PIXEL_FORMAT.RGBA8888;
    #else
            mPixelFormat = PIXEL_FORMAT.RGB888; // Use RGB888 for mobile
    #endif

        // Register Vuforia life-cycle callbacks
        VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);
        VuforiaARController.Instance.RegisterOnPauseCallback(OnPause);
    }
    
    void OnVuforiaStarted() {

        // Try register camera image format
        if (CameraDevice.Instance.SetFrameFormat(mPixelFormat, true)) {
            Debug.Log("Successfully registered pixel format " + mPixelFormat.ToString());
        } else {
            Debug.LogError(
                "\nFailed to register pixel format: " + mPixelFormat.ToString() +
                "\nThe format may be unsupported by your device." +
                "\nConsider using a different pixel format.\n");
        }

    }

    /// <summary>
    /// Called when app is paused / resumed
    /// </summary>
    void OnPause(bool paused) {
        if (paused) {
            Debug.Log("App was paused");
            UnregisterFormat();
        } else {
            Debug.Log("App was resumed");
            RegisterFormat();
        }
    }

    /// <summary>
    /// Register the camera pixel format
    /// </summary>
    void RegisterFormat() {
        if (CameraDevice.Instance.SetFrameFormat(mPixelFormat, true)) {
            Debug.Log("Successfully registered camera pixel format " + mPixelFormat.ToString());
        } else {
            Debug.LogError("Failed to register camera pixel format " + mPixelFormat.ToString());
        }
    }

    /// <summary>
    /// Unregister the camera pixel format (e.g. call this when app is paused)
    /// </summary>
    void UnregisterFormat() {
        Debug.Log("Unregistering camera pixel format " + mPixelFormat.ToString());
        CameraDevice.Instance.SetFrameFormat(mPixelFormat, false);
    }

    public bool HasAlphaChannel() {
        return mPixelFormat == PIXEL_FORMAT.RGBA8888;
    }

    public Image GetImage() {
        return CameraDevice.Instance.GetCameraImage(mPixelFormat);
    }
}