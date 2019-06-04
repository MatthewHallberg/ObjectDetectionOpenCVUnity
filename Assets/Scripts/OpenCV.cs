using System.Collections;
using UnityEngine;
using Vuforia;

public class OpenCV : MonoBehaviour {

    public CameraFeedBehavior cameraFeedBehavior;
    public DetectionManager detectionManager;

    public int DetectionInterval = 30;

    [Header("ML Assets")]
    public TextAsset labelFile;
    public string modelName = "yolov3-tiny";

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
    }


    IEnumerator DetectRoutine() {
        yield return new WaitForEndOfFrame();
        while (true) {
            Image camImage = cameraFeedBehavior.GetImage();
            if (camImage.Width > 100) {
                string _data = NativeLibAdapter.DetectObjects(
                    camImage.Pixels,
                    camImage.Width,
                    camImage.Height,
                    cameraFeedBehavior.HasAlphaChannel(),
                    DetectionInterval
                );
                detectionManager.DrawDetections(_data);
            }
            yield return new WaitForEndOfFrame();
        }
    }
}