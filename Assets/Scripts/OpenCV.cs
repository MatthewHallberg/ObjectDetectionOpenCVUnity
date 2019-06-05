using System.Collections;
using UnityEngine;
using Vuforia;
using System.Threading;

public class OpenCV : MonoBehaviour {

    public CameraFeedBehavior cameraFeedBehavior;
    public DetectionManager detectionManager;

    public int DetectionInterval = 30;

    [Header("ML Assets")]
    public TextAsset labelFile;
    public string modelName = "yolov3-tiny";

    Image camImage;
    Thread detection;
    string detectionData = "";

    void Start() {
        string pathToConfig = System.IO.Path.Combine(Application.streamingAssetsPath, modelName + ".cfg");
        string fullPathConfig = System.IO.Path.GetFullPath(pathToConfig);
        string pathToWeights = System.IO.Path.Combine(Application.streamingAssetsPath, modelName + ".weights");
        string fullPathWeights = System.IO.Path.GetFullPath(pathToWeights);

        //TODO: MIGHT NEED CHANGED FOR ANDROID??
        Debug.Log(fullPathWeights);
        Debug.Log(fullPathConfig);

        //init plugin
        NativeLibAdapter.InitPlugin(labelFile.ToString(), fullPathConfig, fullPathWeights);
        StartCoroutine(DetectRoutine());

        //start other thread
        detection = new Thread(DetectionThread);
        detection.Start();
    }

    void DetectionThread() {
        while (true) {
            camImage = cameraFeedBehavior.GetImage();
            if (camImage != null && camImage.Width > 100) {
                detectionData = NativeLibAdapter.DetectObjects(
                    camImage.Pixels,
                    camImage.Width,
                    camImage.Height,
                    cameraFeedBehavior.HasAlphaChannel(),
                    DetectionInterval
                );
            }
        }
    }

    IEnumerator DetectRoutine() {
        yield return new WaitForEndOfFrame();
        while (true) {
            detectionManager.DrawDetections(detectionData, camImage.Width, camImage.Height);
            yield return new WaitForEndOfFrame();
        }
    }
}