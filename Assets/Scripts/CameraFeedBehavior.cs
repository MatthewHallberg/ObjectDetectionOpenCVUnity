using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
#if !UNITY_EDITOR
using System;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.ARFoundation;
#endif

public class CameraFeedBehavior : MonoBehaviour {

    readonly TextureFormat textureFormat = TextureFormat.RGB24;

    public OpenCV opencv;
    public RawImage camImageTex;
    public AspectRatioFitter ratioFitter;
    public ARCameraManager aRCameraManager;

    WebCamTexture webCamTex;
    Texture2D tempTex;

    void Start() {
        Application.targetFrameRate = 30;
#if UNITY_EDITOR
        InitWebcam();
#else
        InitXRCam();
#endif
    }

#if UNITY_EDITOR
    void Update() {
        UpdateWebCam();
    }

    void InitWebcam() {
        webCamTex = new WebCamTexture(WebCamTexture.devices[0].name, 800, 600, 30);
        camImageTex.texture = webCamTex;
        webCamTex.Play();
    }

    void UpdateWebCam() {
        if (webCamTex.width > 100) {
            if (tempTex == null) {
                Debug.Log(webCamTex.width + " : " + webCamTex.height);
                //set UI cam image aspect ratio
                float aspectRatio = (float)webCamTex.width / (float)webCamTex.height;
                ratioFitter.aspectRatio = aspectRatio;
                tempTex = new Texture2D(webCamTex.width, webCamTex.height, textureFormat, false);
            }
            
            //get webcamtexture out of B8G8R8A8_UNorm format
            tempTex.SetPixels32(webCamTex.GetPixels32());
            //load data for other thread
            opencv.SubmitFrame(new ImageData {
                data = tempTex.GetRawTextureData(),
                width = tempTex.width,
                height = tempTex.height
            });
        }
    }
#else
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

        if (!aRCameraManager.TryGetLatestImage(out XRCameraImage image)) {
            return;
        }

        if (tempTex == null || tempTex.width != image.width || tempTex.height != image.height) {
            tempTex = new Texture2D(image.width, image.height, textureFormat, false);
        }

        var conversionParams = new XRCameraImageConversionParams(image, textureFormat, CameraImageTransformation.MirrorX);

        conversionParams.outputDimensions = new Vector2Int(image.width/2, image.height / 2);

        var rawTextureData = tempTex.GetRawTextureData<byte>();
        try {
            image.Convert(conversionParams, new IntPtr(rawTextureData.GetUnsafePtr()), rawTextureData.Length);
        } finally {
            image.Dispose();
        }

        tempTex.Apply();

        //load data for other thread
        Debug.Log(tempTex.width + " " + tempTex.height);
        opencv.SubmitFrame(new ImageData {
            data = tempTex.GetRawTextureData(),
            width = tempTex.width,
            height = tempTex.height
        });
    }
#endif
}