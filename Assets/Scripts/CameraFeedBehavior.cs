using UnityEngine;
using UnityEngine.UI;

public class CameraFeedBehavior : MonoBehaviour {

    public RawImage camImageTex;
    public AspectRatioFitter ratioFitter;

    ImageData imageData = new ImageData();
    WebCamTexture webCamTex;
    Texture2D tempTex;

    bool processingFrame;

    void Start() {
        Application.targetFrameRate = 60;
        webCamTex = new WebCamTexture(WebCamTexture.devices[0].name, 640, 480, 60);
        camImageTex.texture = webCamTex;
        webCamTex.Play();
    }

    void Update() {
        if (webCamTex.width > 100) {
            if (tempTex == null) {
                //set UI cam image aspect ratio
                float aspectRatio = (float)webCamTex.width / (float)webCamTex.height;
                ratioFitter.aspectRatio = aspectRatio;
                tempTex = new Texture2D(webCamTex.width, webCamTex.height, TextureFormat.RGB24, false);
            }
            if (!processingFrame) {
                //get webcamtexture out of B8G8R8A8_UNorm format
                tempTex.SetPixels32(webCamTex.GetPixels32());
                //load data for other thread
                imageData.data = tempTex.GetRawTextureData();
                imageData.width = tempTex.width;
                imageData.height = tempTex.height;
            }
        }
    }

    public void DoneProcessing() {
        processingFrame = false;
    }

    public ImageData GetCamImage() {
        processingFrame = true;
        return imageData;
    }

    public bool HasAlphaChannel() {
        return false;
    }
}