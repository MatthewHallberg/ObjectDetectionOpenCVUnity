using System.Collections;
using UnityEngine;
using Vuforia;

public class VuforiaSettings : MonoBehaviour {
    void Start() {
        Application.targetFrameRate = 60;
        VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);
    }

    private void OnDisable() {
        VuforiaARController.Instance.UnregisterVuforiaStartedCallback(OnVuforiaStarted);
    }

    void OnVuforiaStarted() {
        StartCoroutine(DelaySetupRoutine());
    }

    IEnumerator DelaySetupRoutine() {
        CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
        yield return new WaitForEndOfFrame();
        MixedRealityController.Instance.SetMode(MixedRealityController.Mode.HANDHELD_AR);
    }
}