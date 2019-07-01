using System;
using UnityEngine;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(OpenCV))]
public class ARCamFeed : MonoBehaviour {

    [SerializeField]
    public ARCameraManager arCameraManager;

    OpenCV openCV;
    Texture2D textureToSend;
    bool texturesCreated;

    public void Init() {
        openCV = GetComponent<OpenCV>();
        arCameraManager.frameReceived += OnCameraFrameReceived;
    }

    void OnDisable() {
        if (texturesCreated) {
            arCameraManager.frameReceived -= OnCameraFrameReceived;
        }
    }

    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs) {

        if (!arCameraManager.TryGetLatestImage(out XRCameraImage image)) {
            return;
        }

        if (textureToSend == null || textureToSend.width != image.width || textureToSend.height != image.height) {
            textureToSend = new Texture2D(image.width, image.height, openCV.GetTextureFormat(), false);
        }

        var conversionParams = new XRCameraImageConversionParams(
            image, openCV.GetTextureFormat(), CameraImageTransformation.MirrorY);

        var rawTextureData = textureToSend.GetRawTextureData<byte>();

        try {
            image.Convert(conversionParams, new IntPtr(rawTextureData.GetUnsafePtr()), rawTextureData.Length);
        } finally {
            image.Dispose();
        }

        if (!texturesCreated) {
            texturesCreated = true;
            //init textures here
            openCV.CreateWritableTexture(image.width, image.height);
            return;
        }

        textureToSend.Apply();
        //process the image
        openCV.ProcessImage(textureToSend);
    }
}