using System;
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

    public NativeLibAdapter nativeLibAdapter;

    public RawImage screenImageFromPlugin;
    public OpenCV opencv;
    public AspectRatioFitter ratioFitter;
    public ARCameraManager aRCameraManager;

    WebCamTexture webCamTex;
    Texture2D writableTexture;
    Texture2D textureToSend;

    void Start() {
        Application.targetFrameRate = 60;
#if UNITY_EDITOR
        InitWebcam();
#endif
    }

#if UNITY_EDITOR

    void Update() {
        UpdateWebCam();
    }

    void InitWebcam() {
        webCamTex = new WebCamTexture(WebCamTexture.devices[0].name, 800, 600, 60);
        webCamTex.Play();
    }

    void UpdateWebCam() {
        if (webCamTex.width > 100) {
            if (writableTexture == null) {
                Debug.Log(webCamTex.width + " : " + webCamTex.height);
                //set UI cam image aspect ratio
                float aspectRatio = (float)webCamTex.width / (float)webCamTex.height;
                ratioFitter.aspectRatio = aspectRatio;

                //set up cam textures
                writableTexture = new Texture2D(webCamTex.width, webCamTex.height, textureFormat, false) {
                    filterMode = FilterMode.Point
                };

                textureToSend = new Texture2D(webCamTex.width, webCamTex.height, textureFormat, false) {
                    filterMode = FilterMode.Point
                };

                nativeLibAdapter.PassViewTextureToPlugin(writableTexture);
                screenImageFromPlugin.texture = writableTexture;

                //start rendering event
                nativeLibAdapter.StartOnRenderEvent();

                return;
            }

            textureToSend.SetPixels32(webCamTex.GetPixels32());
            textureToSend.Apply();
            nativeLibAdapter.ProcessImageCV(textureToSend);
        }
    }
#else
    void OnEnable() {
        aRCameraManager.frameReceived += OnCameraFrameReceived;
    }

    void OnDisable() {
        aRCameraManager.frameReceived -= OnCameraFrameReceived;
    }

    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs) {

        if (!aRCameraManager.TryGetLatestImage(out XRCameraImage image)) {
            return;
        }

        if (writableTexture == null || writableTexture.width != image.width || writableTexture.height != image.height) {
            //init textures here

            writableTexture = new Texture2D(image.width, image.height, textureFormat, false) {
                filterMode = FilterMode.Point
            };

            textureToSend = new Texture2D(webCamTex.width, webCamTex.height, textureFormat, false) {
                filterMode = FilterMode.Point
            };

            nativeLibAdapter.PassViewTextureToPlugin(writableTexture);
            screenImageFromPlugin.texture = writableTexture;

            //set UI cam image aspect ratio
            float aspectRatio = (float)writableTexture.width / (float)writableTexture.height;
            ratioFitter.aspectRatio = aspectRatio;
        }

        var conversionParams = new XRCameraImageConversionParams(image, textureFormat, CameraImageTransformation.MirrorX);

        conversionParams.outputDimensions = new Vector2Int(image.width/2, image.height / 2);

        var rawTextureData = textureToSend.GetRawTextureData<byte>();
        try {
            image.Convert(conversionParams, new IntPtr(rawTextureData.GetUnsafePtr()), rawTextureData.Length);
        } finally {
            image.Dispose();
        }

        textureToSend.Apply();

        //load data for other thread
        Debug.Log(textureToSend.width + " " + textureToSend.height);
        nativeLibAdapter.ProcessImageCV(textureToSend);
    }
#endif
}