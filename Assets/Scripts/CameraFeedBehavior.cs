using UnityEngine;
using UnityEngine.UI;
using System;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.Experimental;

public class CameraFeedBehavior : MonoBehaviour {

    readonly TextureFormat textureFormat = TextureFormat.RGB24;

    public RawImage camImageTex;
    public AspectRatioFitter ratioFitter;
    public ARCameraManager aRCameraManager;

    ImageData imageData = new ImageData();
    WebCamTexture webCamTex;
    Texture2D tempTex;

    bool processingFrame;

    void Awake() {
        Application.targetFrameRate = 60;
#if UNITY_EDITOR
        InitWebcam();
#else
        InitXRCam();
#endif
    }

    void OnEnable() {
        aRCameraManager.frameReceived += OnCameraFrameReceived;
    }

    void OnDisable() {
        aRCameraManager.frameReceived -= OnCameraFrameReceived;
    }

    void InitXRCam() {
        camImageTex.gameObject.SetActive(false);
    }

    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs) {

        if (!processingFrame) {

            if (!aRCameraManager.TryGetLatestImage(out XRCameraImage image)) {
                return;
            }

            if (tempTex == null || tempTex.width != image.width || tempTex.height != image.height) {
                tempTex = new Texture2D(image.width, image.height, textureFormat, false);
            }

            var conversionParams = new XRCameraImageConversionParams(image, textureFormat, CameraImageTransformation.MirrorX);

            var rawTextureData = tempTex.GetRawTextureData<byte>();
            try {
                image.Convert(conversionParams, new IntPtr(rawTextureData.GetUnsafePtr()), rawTextureData.Length);
            } finally {
                image.Dispose();
            }

            tempTex.Apply();

            //load data for other thread
            imageData.data = tempTex.GetRawTextureData();
            imageData.width = tempTex.width;
            imageData.height = tempTex.height;
        }
    }

#if UNITY_EDITOR
    void Update() {
        UpdateWebCam();
    }
#endif

    void InitWebcam() {
        webCamTex = new WebCamTexture(WebCamTexture.devices[0].name, 640, 480, 60);
        camImageTex.texture = webCamTex;
        webCamTex.Play();
    }

    void UpdateWebCam() {
        if (webCamTex.width > 100) {
            if (tempTex == null) {
                //set UI cam image aspect ratio
                float aspectRatio = (float)webCamTex.width / (float)webCamTex.height;
                ratioFitter.aspectRatio = aspectRatio;
                tempTex = new Texture2D(webCamTex.width, webCamTex.height, textureFormat, false);
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