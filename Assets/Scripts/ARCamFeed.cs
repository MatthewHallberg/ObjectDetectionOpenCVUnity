using System;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(OpenCV))]
public class ARCamFeed : MonoBehaviour {

    [SerializeField]
    public ARCameraManager arCameraManager;

    [SerializeField]
    public GameObject uiImage;

    OpenCV openCV;
    Texture2D textureToSend;

    public void Init() {
        openCV = GetComponent<OpenCV>();
        arCameraManager.frameReceived += OnCameraFrameReceived;
        uiImage.SetActive(false);
    }


    void OnDisable() {
        arCameraManager.frameReceived -= OnCameraFrameReceived;
    }

    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs) {

        if (!arCameraManager.TryGetLatestImage(out XRCameraImage image)) {
            return;
        }

        //limit rotation to landscape left because im lazy
        int rotation = 0;
        CameraImageTransformation camTransform = CameraImageTransformation.None;

        XRCameraImageConversionParams conversionParams = new XRCameraImageConversionParams {
            // Get the entire image
            inputRect = new RectInt(0, 0, image.width, image.height),

            // Downsample
            outputDimensions = new Vector2Int(image.width / 3, image.height / 3),

            // Choose RGB format
            outputFormat = openCV.textureFormat,

            // Choose transform type
            transformation = camTransform
        };

        // See how many bytes we need to store the final image.
        int size = image.GetConvertedDataSize(conversionParams);

        // Allocate a buffer to store the image
        var buffer = new NativeArray<byte>(size, Allocator.Temp);

        // Extract the image data
        image.Convert(conversionParams, new IntPtr(buffer.GetUnsafePtr()), buffer.Length);

        image.Dispose();

        if (textureToSend == null) {
            textureToSend = new Texture2D(
                conversionParams.outputDimensions.x,
                conversionParams.outputDimensions.y,
                conversionParams.outputFormat,
            false);
        }

        textureToSend.LoadRawTextureData(buffer);
        textureToSend.Apply();

        //process the image
        openCV.ProcessImage(textureToSend, rotation);

        // Done with our temporary data
        buffer.Dispose();
    }
}