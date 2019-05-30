using UnityEngine;

public class OpenCV : MonoBehaviour {

    public CameraFeedBehavior cameraFeedBehavior;

    void Update() {

        Texture2D camTex = cameraFeedBehavior.GetImage();

        if (camTex.width > 100) {
            string data = NativeLibAdapter.DetectObjects(camTex.GetPixels32(),camTex.width,camTex.height);

            Debug.Log(data);

        }
    }
}