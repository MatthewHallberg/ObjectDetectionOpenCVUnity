using UnityEngine;
using UnityEngine.UI;

public class CameraFeedBehavior : MonoBehaviour {

    public RawImage camImageTex;
    public AspectRatioFitter ratioFitter;

    ImageData imageData = new ImageData();
    WebCamTexture webCamTex;
    Texture2D tempTex;
    bool textureHasAlpha;

    void Start() {
        textureHasAlpha = Application.isEditor;
        webCamTex = new WebCamTexture();
        camImageTex.texture = webCamTex;
        webCamTex.Play();
    }

    void Update() {
        //set UI cam image aspect ratio
        float aspectRatio = (float)webCamTex.width / (float)webCamTex.height;
        ratioFitter.aspectRatio = aspectRatio;
        //get webcamtexture out of B8G8R8A8_UNorm format
        tempTex = new Texture2D(webCamTex.width, webCamTex.height, TextureFormat.RGBA32, false);
        tempTex.SetPixels32(webCamTex.GetPixels32());
        //load data for other thread
        imageData.data = tempTex.GetRawTextureData();
        imageData.width = tempTex.width;
        imageData.height = tempTex.height;
    }

    public ImageData GetCamImage() {
        return imageData;
    }

    public bool HasAlphaChannel() {
        return textureHasAlpha;
    }
}