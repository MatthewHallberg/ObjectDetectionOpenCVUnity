using UnityEngine;

public class OpenCV : MonoBehaviour {

    public DetectionBoxes detectionBoxes;
    public NativeLibAdapter nativeLibAdapter;

    [Header("ML Assets")]
    public TextAsset labelFile;
    public string modelName = "yolov3-tiny";

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
    }

    public void SubmitFrame(ImageData imageData) {
        //set values to be read elsewhere
        currWidth = imageData.width;
        currHeight = imageData.height;
        //submit frame to plugin
        nativeLibAdapter.DetectObjects(imageData.data, imageData.width, imageData.height);
    }

    public void OnDetectionResult(string result){
        detectionBoxes.DrawDetections(result, currWidth, currHeight);
    }
}