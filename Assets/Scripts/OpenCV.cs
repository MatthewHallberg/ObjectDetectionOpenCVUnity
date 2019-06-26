using System.Collections;
using UnityEngine;
using System;

public class OpenCV : MonoBehaviour {

    int DetectionInterval = 15;

    public DetectionBoxes detectionBoxes;
    public NativeLibAdapter nativeLibAdapter;

    [Header("ML Assets")]
    public TextAsset labelFile;
    public string modelName = "yolov3-tiny";

    string detectionData = "";
    int currWidth;
    int currHeight;

    void Start() {
        string pathToConfig = System.IO.Path.Combine(Application.streamingAssetsPath, modelName + ".cfg");
        string fullPathConfig = System.IO.Path.GetFullPath(pathToConfig);
        string pathToWeights = System.IO.Path.Combine(Application.streamingAssetsPath, modelName + ".weights");
        string fullPathWeights = System.IO.Path.GetFullPath(pathToWeights);

        //TODO: MIGHT NEED CHANGED FOR ANDROID??
        Debug.Log(fullPathWeights);
        Debug.Log(fullPathConfig);

        //init plugin
        nativeLibAdapter.InitPlugin(labelFile.ToString(), fullPathConfig, fullPathWeights);
        StartCoroutine(DetectRoutine());
    }

    public void SubmitFrame(ImageData imageData) {
        //set values to be read elsewhere
        currWidth = imageData.width;
        currHeight = imageData.height;
        //set this here so we can change at runtime if needed
        DetectionInterval = Mathf.Clamp(DetectionInterval, 1, 1000);
        //submit frame to plugin
        nativeLibAdapter.DetectObjects(imageData.data, imageData.width, imageData.height, false, 15);
    }

    IEnumerator DetectRoutine() {
        yield return new WaitForEndOfFrame();
        while (true) {
            detectionBoxes.DrawDetections(detectionData, currWidth, currHeight);
            yield return new WaitForEndOfFrame();
        }
    }
}