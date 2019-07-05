using UnityEngine;
using UnityEngine.UI;

public class OpenCV : MonoBehaviour {

    public TextureFormat sendFormat = TextureFormat.RGB24;
    public TextureFormat viewFormat = TextureFormat.RGBA32;

    [SerializeField]
    public NativeLibAdapter nativeLibAdapter;

    [Header("ML Assets")]
    public TextAsset labelFile;
    public string modelName = "yolov3-tiny";

    [Header("Camera Feeds")]
    public ARCamFeed arCamFeed;
    public EditorCamFeed editorCamFeed;

    [Header("UI")]
    public RawImage screenImageFromPlugin;
    public AspectRatioFitter ratioFitter;

    Texture2D writableTexture;

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

    public void CreateWritableTexture(int width, int height) {

        Debug.Log(width + " : " + height);

        //set UI cam image aspect ratio
        float aspectRatio = (float)width / (float)height;
        ratioFitter.aspectRatio = aspectRatio;

        //set up cam textures
        writableTexture = new Texture2D(width, height, viewFormat, false);
        
        nativeLibAdapter.PassViewTextureToPlugin(writableTexture);
        screenImageFromPlugin.texture = writableTexture;

        //start rendering event
        nativeLibAdapter.StartOnRenderEvent();
    }

    public void ProcessImage(Texture2D texture) {
        nativeLibAdapter.ProcessImageCV(texture);
    }
}