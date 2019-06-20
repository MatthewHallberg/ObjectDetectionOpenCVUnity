using System;
using System.Collections.Generic;
using UnityEngine;

public class DetectionBoxes : MonoBehaviour {

    public GUIStyle style;
    
    struct Detection {
        public string label;
        public Rect rect;
    }

    List<Detection> currDetections = new List<Detection>();

    public void DrawDetections(string detections, float imgWidth, float imgHeight) {
        currDetections.Clear();
        if (detections.Length > 1) {
            string[] detectionsSplit = detections.Split(',');
            for (int i = 0; i < detectionsSplit.Length - 1; i += 5) {
                string label = detectionsSplit[i];
                //get screen width and height base on orientation
                float ScreenHeight = Screen.height;
                float ScreenWidth = Screen.width;
                //landscape
                float boxWidth = float.Parse(detectionsSplit[i + 3]);
                float boxHeight = float.Parse(detectionsSplit[i + 4]);
                //get min max coordinates of box
                float xMin = float.Parse(detectionsSplit[i + 1]);
                float yMin = float.Parse(detectionsSplit[i + 2]);
                float xMax = xMin + boxWidth;
                float yMax = yMin + boxHeight;

                float newHeight = imgHeight / imgWidth * ScreenWidth;
                float newWidth = imgWidth / imgHeight * ScreenHeight;

                float vertOverflow = (newHeight - ScreenHeight) / 2;
                float horOverflow = (newWidth - ScreenWidth) / 2;

                //Translate to screen space
                //Opencv draws from bottom of screen Unity draws from top
                if (ScreenWidth > ScreenHeight) {
                    //landscape
                    xMin = xMin * ScreenWidth / imgWidth;
                    xMax = xMax * ScreenWidth / imgWidth;

                    boxHeight = boxHeight * newHeight / imgHeight;
                    yMin = yMin * newHeight / imgHeight;
                    yMin = newHeight - yMin - vertOverflow;
                    yMax = yMin - boxHeight;

                } else {
                    //portrait
                    yMin = yMin * ScreenHeight / imgHeight;
                    yMax = yMax * ScreenHeight / imgHeight;
                    yMin = ScreenHeight - yMin;
                    yMax = ScreenHeight - yMax;

                    xMin = xMin * newWidth / imgWidth;
                    xMin = xMin - horOverflow;
                    boxWidth = boxWidth * newWidth / imgWidth;
                    xMax = xMin + boxWidth;
                }

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
        try {
            foreach (Detection item in currDetections) {
                GUI.Box(item.rect, item.label, style);
            }
        } catch (InvalidOperationException e) {
            Debug.Log("Collection modified during Execution " + e);
        }
    }
}
