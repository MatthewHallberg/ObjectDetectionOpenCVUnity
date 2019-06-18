using System.Collections;
using UnityEngine;
using System.Threading;

public class OpenCV : MonoBehaviour {

    const int DetectionInterval = 10;

    public CameraFeedBehavior cameraFeedBehavior;
    public DetectionManager detectionManager;

    [Header("ML Assets")]
    public TextAsset labelFile;
    public string modelName = "yolov3-tiny";

    ImageData camImage;
    Thread detection;
    string detectionData = "";
    bool runThread = true;

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

    void OnApplicationQuit() {
        runThread = false;
        Debug.Log("Stopping detection thread...");
    }

    void DetectionThread() {
        while (runThread) {
            camImage = cameraFeedBehavior.GetCamImage();
            if (camImage.width > 100) {
                detectionData = NativeLibAdapter.DetectObjects(
                    camImage.data,
                    camImage.width,
                    camImage.width,
                    cameraFeedBehavior.HasAlphaChannel(),
                    DetectionInterval
                );
            }
        }
    }

    IEnumerator DetectRoutine() {
        yield return new WaitForEndOfFrame();
        while (true) {
            detectionManager.DrawDetections(detectionData, camImage.width, camImage.height);
            yield return new WaitForEndOfFrame();
        }
    }
}