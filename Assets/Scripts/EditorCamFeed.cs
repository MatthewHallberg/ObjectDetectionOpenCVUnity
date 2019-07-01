using UnityEngine;

[RequireComponent(typeof(OpenCV))]
public class EditorCamFeed : MonoBehaviour {

    OpenCV openCV;
    WebCamTexture webCamTex;
    Texture2D textureToSend;
    bool texturesCreated;

    public void Init() {
        openCV = GetComponent<OpenCV>();
        webCamTex = new WebCamTexture(WebCamTexture.devices[0].name, 800, 600, 30);
        webCamTex.Play();
    }

#if UNITY_EDITOR
    private void Update() {
        if (webCamTex.width > 100) {
            if (!texturesCreated) {
                texturesCreated = true;
                openCV.CreateWritableTexture(webCamTex.width, webCamTex.height);
                textureToSend = new Texture2D(webCamTex.width, webCamTex.height, openCV.GetTextureFormat(), false);
                return;
            }
            textureToSend.SetPixels32(webCamTex.GetPixels32());
            textureToSend.Apply();
            openCV.ProcessImage(textureToSend);
        }
    }
#endif
}
