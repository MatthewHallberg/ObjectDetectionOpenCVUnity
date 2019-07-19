using UnityEngine;

public class OpenCV : MonoBehaviour {

    [HideInInspector]
    public TextureFormat textureFormat = TextureFormat.RGB24;

    [SerializeField]
    public NativeLibAdapter nativeLibAdapter;

    public Visualizer visualizer;

    [Header("ML Assets")]
    public TextAsset labelFile;
    public string modelName = "yolov3-tiny";

    [Header("Camera Feeds")]
    public ARCamFeed arCamFeed;
    public EditorCamFeed editorCamFeed;

    void Start() {
        string pathToConfig = System.IO.Path.Combine(Application.streamingAssetsPath, modelName + ".cfg");
        string fullPathConfig = System.IO.Path.GetFullPath(pathToConfig);
        string pathToWeights = System.IO.Path.Combine(Application.streamingAssetsPath, modelName + ".weights");
        string fullPathWeights = System.IO.Path.GetFullPath(pathToWeights);

        //TODO: MIGHT NEED CHANGED FOR ANDROID??
        //Debug.Log(fullPathWeights);
        //Debug.Log(fullPathConfig);

        //init plugin
        nativeLibAdapter.InitPlugin(labelFile.ToString(), fullPathConfig, fullPathWeights);
        Application.targetFrameRate = 30;
        //initialize camera feed
#if UNITY_EDITOR
        editorCamFeed.Init();
#else
        arCamFeed.Init();
#endif
    }

    public void ProcessImage(Texture2D texture, int rotation) {
        nativeLibAdapter.ProcessImageCV(texture,rotation,visualizer.DrawDetections);
    }
}