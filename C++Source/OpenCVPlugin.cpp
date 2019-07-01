#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/tracking.hpp>
#include <opencv2/dnn.hpp>
#include <OpenGL/gl.h>
#include <OpenGL/gl.h>


using namespace std;
using namespace cv;
using namespace dnn;

// Initialize the parameters
float confThreshold = 0.2; // Confidence threshold
float nmsThreshold = .01;  // Non-maximum suppression threshold
int inpWidth = 416;        // was 416 Width of network's input image
int inpHeight = 416;       // was  416 Height of network's input image
int framecount = 0;

vector<string> classes;
Net net;
Mat currMat;

void DrawDection(string label, Rect rect, Mat& frame){
    rectangle(frame, rect, Scalar(0, 0, 255),5);
    //Display the label at the top of the bounding box
    putText(frame, label, Point(rect.x, rect.y), FONT_HERSHEY_SIMPLEX, 2, Scalar(0,0,255),3);
}

class Detection {
public:
    string label;
    Rect2d box;
    Rect2d trackingBox;
    Ptr<Tracker> tracker;
    
    Detection(string objectName, Rect boundingBox,Mat& frame){
        label = objectName;
        box = boundingBox;
        trackingBox = box;
        //best tracker but performance goes to shit (worth testing on device?)
        //tracker = TrackerCSRT::create();
        tracker = TrackerKCF::create();
        tracker->init(frame, trackingBox);
    }
    
    void Destroy(){
        tracker.release();
        delete tracker;
    }
    
    void Draw(Mat& frame){
        DrawDection(label,box,frame);
    }
    
    bool UpdateTracker(Mat frame){
        bool success = tracker->update(frame, trackingBox);
        if (success) DrawDection(label,trackingBox,frame);
        return success;
    }
};

vector<Detection> detections;
// Draw the predicted bounding box
void drawPred(int classId, float conf, int left, int top, int right, int bottom, Mat& frame){
    //Draw a rectangle displaying the bounding box
    Rect rect(left, top, right - left, bottom - top);
    //Get the label for the class name and its confidence
    string label;// = format("%.2f", conf);
    if (!classes.empty()){
        CV_Assert(classId < (int)classes.size());
        label = classes[classId];// + ":" + label;
    }
    //add to current list
    Detection det = Detection(label,rect,frame);
    det.Draw(frame);
    detections.push_back(det);
}

// Get the names of the output layers
vector<String> getOutputsNames(const Net net){
    static vector<String> names;
    if (names.empty()){
        //Get the indices of the output layers, i.e. the layers with unconnected outputs
        vector<int> outLayers = net.getUnconnectedOutLayers();
        
        //get the names of all the layers in the network
        vector<String> layersNames = net.getLayerNames();
        
        // Get the names of the output layers in names
        names.resize(outLayers.size());
        for (size_t i = 0; i < outLayers.size(); ++i)
            names[i] = layersNames[outLayers[i] - 1];
    }
    return names;
}

// Remove the bounding boxes with low confidence using non-maxima suppression
void postprocess(Mat& frame, const vector<Mat> outs){
    vector<int> classIds;
    vector<float> confidences;
    vector<Rect> boxes;
    
    for (size_t i = 0; i < outs.size(); ++i){
        // Scan through all the bounding boxes output from the network and keep only the
        // ones with high confidence scores. Assign the box's class label as the class
        // with the highest score for the box.
        float* data = (float*)outs[i].data;
        for (int j = 0; j < outs[i].rows; ++j, data += outs[i].cols){
            Mat scores = outs[i].row(j).colRange(5, outs[i].cols);
            Point classIdPoint;
            double confidence;
            // Get the value and location of the maximum score
            minMaxLoc(scores, 0, &confidence, 0, &classIdPoint);
            if (confidence > confThreshold){
                int centerX = (int)(data[0] * frame.cols);
                int centerY = (int)(data[1] * frame.rows);
                int width = (int)(data[2] * frame.cols);
                int height = (int)(data[3] * frame.rows);
                int left = centerX - width / 2;
                int top = centerY - height / 2;
                
                classIds.push_back(classIdPoint.x);
                confidences.push_back((float)confidence);
                boxes.push_back(Rect(left, top, width, height));
            }
        }
    }
    
    // Perform non maximum suppression to eliminate redundant overlapping boxes with
    // lower confidences
    vector<int> indices;
    NMSBoxes(boxes, confidences, confThreshold, nmsThreshold, indices);
    
    //loop through all current detections and clear
    for(int i = 0; i < detections.size(); i++){
        detections[i].Destroy();
    }
    detections.clear();
    
    for (size_t i = 0; i < indices.size(); ++i){
        int idx = indices[i];
        Rect box = boxes[idx];
        drawPred(classIds[idx], confidences[idx], box.x, box.y,
                 box.x + box.width, box.y + box.height, frame);
    }
}

void RunModel(Mat& frame){
    // Create a 4D blob from a frame.
    Mat blob;
    blobFromImage(frame, blob, 1/255.0, Size(inpWidth,inpHeight), Scalar(0,0,0), /*swapRB*/false, /*crop*/false);
    
    //Sets the input to the network
    net.setInput(blob);
    
    // Runs the forward pass to get output of the output layers
    vector<Mat> networkOutput;
    net.forward(networkOutput, getOutputsNames(net));
    
    // Remove the bounding boxes with low confidence
    postprocess(frame, networkOutput);
    blob.deallocate();
}

void TrackDetections(Mat& frame){
    //loop through all detections and track
    for(int i = 0; i < detections.size(); i++){
        //if tracking lost remove from list
        if (!detections[i].UpdateTracker(frame)){
            detections[i].Destroy();
            detections.erase(detections.begin() + i);
        }
    }
}

void CreateLabels(string labelFile){
    string label;
    stringstream ss(labelFile);
    while(getline(ss,label,'\n')){
        classes.push_back(label);
    }
}

char* ConvertToChar(string str){
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    return cstr;
}

unsigned char* GetCurrImage(){
    return currMat.data;
}

extern "C" {
    
    int InitOpenCV(char* labels, char* pathToConfig, char* pathToWeights){
        
        if (classes.size() < 1){
            // Load names of classes
            CreateLabels(string(labels));
            // Load the network
            net = readNetFromDarknet(string(pathToConfig), string(pathToWeights));
            net.setPreferableBackend(DNN_BACKEND_OPENCV);
            net.setPreferableTarget(DNN_TARGET_OPENCL);
        } else {
            //loop through all current detections and clear
            for(int i = 0; i < detections.size(); i++){
                detections[i].Destroy();
            }
            detections.clear();
        }
        
        return (int)classes.size();
    }
    
    char* ProcessImageOpenCV(unsigned char* bytes, int width, int height, int detectionInterval){
        
        Mat cameraFrame = Mat(height, width, CV_8UC4, static_cast<void*>(bytes));
        
        cvtColor(cameraFrame,cameraFrame,CV_RGBA2RGB);
        
        if (!cameraFrame.empty()){
            
            //run detection based on interval, track every other frame
            if (framecount % detectionInterval == 0){
                RunModel(cameraFrame);
            } else {
                TrackDetections(cameraFrame);
            }
            
        }
        //return detections in comma seperated string
        string detectionList = "";
        for(int i = 0; i < detections.size(); i++){
            Rect2d box = detections[i].trackingBox;
            detectionList += detections[i].label + ",";
            detectionList += to_string(box.x) + "," + to_string(box.y) + ",";
            detectionList += to_string(box.width) + "," + to_string(box.height) + ",";
        }
        
        framecount++;
        
        cvtColor(cameraFrame,cameraFrame,CV_RGB2RGBA);
        
        cameraFrame.copyTo(currMat);
        cameraFrame.release();
        
        return ConvertToChar(detectionList);
    }
}


