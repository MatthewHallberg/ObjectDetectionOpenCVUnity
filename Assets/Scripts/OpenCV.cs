using System.Collections;
using UnityEngine;
using System.Threading;

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
    Thread detect;

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
        if (completed) {
            completed = false;
            StartCoroutine(SubmitFrameRoutine(imageData));
        }
    }

    IEnumerator SubmitFrameRoutine(ImageData imageData) {
        //create thread
        detect = new Thread(DetectionJob) {
            IsBackground = false
        };
        detect.Start(imageData);
        yield return null;
    }

    bool completed = true;
    void DetectionJob(object data) {
        ImageData imageData = (ImageData)data;
        if (imageData.width > 100) {
            //set values to be read elsewhere
            currWidth = imageData.width;
            currHeight = imageData.height;
            //set this here so we can change at runtime if needed
            DetectionInterval = Mathf.Clamp(DetectionInterval, 1, 1000);
            //submit frame to opencv
            detectionData = nativeLibAdapter.DetectObjects(
                imageData.data,
                imageData.width,
                imageData.width,
                imageData.hasAlphaChannel,
                DetectionInterval
            );
        }
        Thread.Sleep(10);
        completed = true;
    }

    IEnumerator DetectRoutine() {
        yield return new WaitForEndOfFrame();
        while (true) {
            detectionBoxes.DrawDetections(detectionData, currWidth, currHeight);
            yield return new WaitForEndOfFrame();
        }
    }
}