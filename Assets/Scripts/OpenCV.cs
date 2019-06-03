using UnityEngine;
using Vuforia;

public class OpenCV : MonoBehaviour {

    public CameraFeedBehavior cameraFeedBehavior;

    [Header("ML Assets")]
    public TextAsset labelFile;
    public string modelName = "yolov3-tiny";

    private void Start() {

        string pathToConfig = System.IO.Path.Combine(Application.streamingAssetsPath, modelName + ".cfg");
        string fullPathConfig = System.IO.Path.GetFullPath(pathToConfig);
        string pathToWeights = System.IO.Path.Combine(Application.streamingAssetsPath, modelName + ".weights");
        string fullPathWeights= System.IO.Path.GetFullPath(pathToWeights);

        //MIGHT NEED CHANGED FOR ANDROID??
        print(fullPathWeights);
        print(fullPathConfig);

        NativeLibAdapter.InitPlugin(labelFile.ToString(), fullPathConfig, fullPathWeights);
    }

    void Update() {
        Image camImage = cameraFeedBehavior.GetImage();

        if (camImage.Width > 100) {
            string data = NativeLibAdapter.DetectObjects(camImage.Pixels, camImage.Width, camImage.Height);
            Debug.Log(data);
        }
    }
}