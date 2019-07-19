using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(OpenCV))]
public class EditorCamFeed : MonoBehaviour {

    OpenCV openCV;
    WebCamTexture webCamTex;
    Texture2D textureToSend;

    [Header("UI")]
    public RawImage camImage;
    public AspectRatioFitter ratioFitter;

    public void Init() {
        openCV = GetComponent<OpenCV>();
        webCamTex = new WebCamTexture(WebCamTexture.devices[0].name, 640, 480, 30);
        webCamTex.Play();
    }

#if UNITY_EDITOR
    private void Update() {
        if (webCamTex.width > 100) {
            if (textureToSend == null) {
                textureToSend = new Texture2D(webCamTex.width, webCamTex.height, openCV.textureFormat, false);
                //set UI cam image aspect ratio
                float aspectRatio = (float)webCamTex.width / (float)webCamTex.height;
                ratioFitter.aspectRatio = aspectRatio;
                //set viewable cam texture
                camImage.texture = textureToSend;
                return;
            }
            textureToSend.SetPixels32(webCamTex.GetPixels32());
            textureToSend.Apply();
            openCV.ProcessImage(textureToSend, 180);
        }
    }
#endif
}
