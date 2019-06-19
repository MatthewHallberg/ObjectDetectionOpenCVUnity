using System;
using System.Collections.Generic;
using UnityEngine;

public class DetectionManager : MonoBehaviour {

    public GUIStyle style;

    public float add = 1;

    struct Detection {
        public string label;
        public Rect rect;
    }

    List<Detection> currDetections = new List<Detection>();

    public void DrawDetections(string detections, int imgWidth, int imgHeight) {
        currDetections.Clear();
        if (detections.Length > 1) {
            string[] detectionsSplit = detections.Split(',');
            for (int i = 0; i < detectionsSplit.Length - 1; i += 5) {
                string label = detectionsSplit[i];
                //get screen width and height base on orientation
                int ScreenHeight = Screen.height;
                int ScreenWidth = Screen.width;
                //landscape
                float width = float.Parse(detectionsSplit[i + 3]);
                float height = float.Parse(detectionsSplit[i + 4]);
                //get min max coordinates of box
                float xMin = float.Parse(detectionsSplit[i + 1]);
                float yMin = float.Parse(detectionsSplit[i + 2]);
                float xMax = xMin + width;
                float yMax = yMin + height;

                //translate to screen space
                if (ScreenWidth > ScreenHeight) {
                    //landscape
                    xMin = xMin * ScreenWidth / imgWidth;
                    xMax = xMax * ScreenWidth / imgWidth;
                    yMin = Screen.height - (yMin * ScreenHeight / imgHeight);
                    yMax = Screen.height - (yMax * ScreenHeight / imgHeight);
                } else {
                    //portrait



                    yMin = yMin * ScreenHeight / imgHeight;
                    yMax = yMax * ScreenHeight / imgHeight;
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
