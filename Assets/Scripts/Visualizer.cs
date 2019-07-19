using System.Collections.Generic;
using UnityEngine;

public class Visualizer : MonoBehaviour {

    public GUIStyle style;

    struct Detection {
        public string label;
        public Rect rect;
    }

    List<Detection> currDetections = new List<Detection>();

    public void DrawDetections(string detections, float imgWidth, float imgHeight) {
        currDetections.Clear();
        if (detections.Length > 1) {

            //get current screen dimensions
            float ScreenHeight = Screen.height;
            float ScreenWidth = Screen.width;

            float newHeight = imgHeight / imgWidth * ScreenWidth;
            float newWidth = imgWidth / imgHeight * ScreenHeight;

            float vertOverflow = (newHeight - ScreenHeight) / 2;
            float horOverflow = (newWidth - ScreenWidth) / 2;

            //loop through detections
            string[] detectionsSplit = detections.Split(',');
            for (int i = 0; i < detectionsSplit.Length - 1; i += 5) {

                string label = detectionsSplit[i];

                float xMin = float.Parse(detectionsSplit[i + 1]);
                float yMin = float.Parse(detectionsSplit[i + 2]);
                float boxWidth = float.Parse(detectionsSplit[i + 3]);
                float boxHeight = float.Parse(detectionsSplit[i + 4]);

                float xMax = xMin + boxWidth;
                float yMax;

                //Translate to screen space
                //Opencv draws from bottom of screen Unity draws from top
                if (ScreenWidth > ScreenHeight) {
                    //landscape
                    yMax = yMin - boxHeight;

                    xMin = xMin * ScreenWidth / imgWidth;
                    xMax = xMax * ScreenWidth / imgWidth;

                    boxHeight = boxHeight * newHeight / imgHeight;
                    yMin = yMin * newHeight / imgHeight;
                    yMin = newHeight - yMin - vertOverflow;
                    yMax = yMin - boxHeight;

                    yMin = ScreenHeight - yMin;
                    yMax = ScreenHeight - yMax;

                } else {
                    //portrait
                    yMax = yMin + boxHeight;

                    yMin = yMin * ScreenHeight / imgHeight;
                    yMax = yMax * ScreenHeight / imgHeight;

                    xMin = xMin * newWidth / imgWidth;
                    xMin = xMin - horOverflow;
                    boxWidth = boxWidth * newWidth / imgWidth;
                    xMax = xMin + boxWidth;
                }

//this should not be here but im sick of this project
#if UNITY_EDITOR
                xMin = ScreenWidth - xMin;
                xMax = ScreenWidth - xMax;
#endif

                //add to detection list to be drawn
                Rect rect = Rect.MinMaxRect(xMin, yMin, xMax, yMax);
                Detection detection = new Detection {
                    label = label,
                    rect = rect
                };
                currDetections.Add(detection);
            }
        }
    }

    void OnGUI() {
        foreach (Detection item in currDetections) {
            GUI.Box(item.rect, item.label, style);
        }
    }
}
