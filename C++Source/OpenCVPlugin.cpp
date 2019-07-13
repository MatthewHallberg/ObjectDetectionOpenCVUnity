#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/tracking.hpp>
#include <opencv2/dnn.hpp>

using namespace std;
using namespace cv;
using namespace dnn;

// Initialize the parameters
float confThreshold = 0.2; // Confidence threshold
float nmsThreshold = .01;  // Non-maximum suppression threshold
int inpWidth = 416;        // was 416 Width of network's input image
int inpHeight = 416;       // was  416 Height of network's input image
int frameCount = 0;

//darknet
vector<Mat> networkOutput;
Net net;
vector<string> classes;
Mat blob;

//optical flow
TermCriteria termcrit(TermCriteria::COUNT|TermCriteria::EPS,40,0.0001);
vector<Point2f> fullFrameDetectionPoints;
Mat cameraFrame;
Mat previousCamFrame;
cv::Ptr<cv::DescriptorExtractor> extractor = cv::ORB::create(100);

void ExtractPointsFromFrame(Mat& frame){
    
    //get features we will track for optical flow
    cv::goodFeaturesToTrack(frame,// input, the image from which we want to know good features to track
                            fullFrameDetectionPoints,    // output, the points will be stored in this output vector
                            500,                  // max points, maximum number of good features to track
                            0.1,                // quality level, "minimal accepted quality of corners", the lower the more points we will get
                            .01,                  // minDistance, minimum distance between points
                            Mat(),               // mask
                            5,                   // block size
                            false,              // useHarrisDetector, makes tracking a bit better when set to true
                            0.01                 // free parameter for harris detector
                            );
}

void DrawDetection(string label, Rect rect){
    rectangle(cameraFrame, rect, Scalar(0, 0, 255),5);
    //Display the label at the top of the bounding box
    putText(cameraFrame, label, Point(rect.x, rect.y), FONT_HERSHEY_SIMPLEX, 2, Scalar(0,0,255),3);
}

class Detection {
public:
    string label;
    Rect2d box;
    vector<Point2f> previousKeyPoints;
    
    Detection(string objectName, Rect boundingBox,Mat& frame){
        label = objectName;
        box = boundingBox;
    }
    
    void Destroy(){
        //PUT SOMETHING HERE!!! DONT FORGET TO DELEtE WHAT YOU CREATE
    }
    
    void Draw(){
        DrawDetection(label,box);
    }
    
    float clamp(float n, float lower, float upper) {
        return std::max(lower, std::min(n, upper));
    }
    
    void StartTracker(Mat& frame){
        //make sure box is within image
        box.x = clamp(box.x,0,frame.cols);
        box.y = clamp(box.y,0,frame.rows);
        
        if (box.y + box.height > frame.rows){
            box.height = frame.rows - box.y;
        }
        
        if (box.x + box.width > frame.cols){
            box.width = frame.cols - box.x;
        }
        
        //first extract keypoints from detection portion of image
        Mat cropped = frame(box);
        if (cropped.cols > 1 && cropped.rows > 1){
            std::vector<cv::KeyPoint> detectedKeypoints;
            Mat detectedDescriptors;
            extractor->detectAndCompute(cropped, noArray(), detectedKeypoints, detectedDescriptors);
            //find common points with goodfeatures to track and add to good points
            for( int i = 0; i < fullFrameDetectionPoints.size(); i++ ) {
                if (fullFrameDetectionPoints[i].x > box.x && fullFrameDetectionPoints[i].x < box.x + box.width &&
                    fullFrameDetectionPoints[i].y > box.y && fullFrameDetectionPoints[i].y < box.y + box.height){
                    previousKeyPoints.push_back(fullFrameDetectionPoints[i]);
                }
            }
        }
    }
    
    bool UpdateTracker(Mat& frame){
        if(previousKeyPoints.size() < 3){
            StartTracker(frame);
        }
        
        if(previousKeyPoints.size() > 0){
            vector<uchar> status;
            vector<float> err;
            vector<Point2f> flowDectionPoints;
            
            cv::calcOpticalFlowPyrLK(previousCamFrame,     // prev image
                                     frame,          // curr image
                                     previousKeyPoints,           // find these points in the new image
                                     flowDectionPoints,           // result of found points
                                     status,               // output status vector, found points are set to 1
                                     err,                // each point gets an error value (see flag)
                                     cv::Size(80, 80),     // size of the window at each pyramid level
                                     4,                    // maxLevel - 0 = no pyramids, > 0 use this level of pyramids
                                     termcrit,             // termination criteria
                                     0.1,                    // flags OPTFLOW_USE_INITIAL_FLOW or OPTFLOW_LK_GET_MIN_EIGENVALS
                                     0.01                   // minEigThreshold
                                     );
            
            //draw box from optical flow points
            Rect matchBounds = boundingRect(flowDectionPoints);
            box = matchBounds;
            DrawDetection(label,box);
            swap(previousKeyPoints, flowDectionPoints);
            
            return true;
        } else {
            return false;
        }
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
    det.Draw();
    detections.push_back(det);
}

// Get the names of the output layers
vector<String> getOutputsNames(const Net& net){
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
void postprocess(Mat& frame, const vector<Mat>& outs){
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
    blob.deallocate();
    blobFromImage(frame, blob, 1/255.0, cvSize(inpWidth, inpHeight), Scalar(0,0,0), true, false);
    
    //Sets the input to the network
    net.setInput(blob);
    
    // Runs the forward pass to get output of the output layers
    net.forward(networkOutput, getOutputsNames(net));
    
    // Remove the bounding boxes with low confidence
    postprocess(frame, networkOutput);
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
    return cameraFrame.data;
}

extern "C" {
    
    int InitOpenCV(char* labels, char* pathToConfig, char* pathToWeights){
        
        if (classes.size() < 1){
            // Load names of classes
            CreateLabels(string(labels));
            // Load the network
            net = readNetFromDarknet(string(pathToConfig), string(pathToWeights));
            net.setPreferableBackend(DNN_BACKEND_OPENCV);
            net.setPreferableTarget(DNN_TARGET_CPU);
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
        
        //process incoming stream before we can use it
        cameraFrame.release();
        cameraFrame = Mat(height, width, CV_8UC3, static_cast<void*>(bytes));
        rotate(cameraFrame,cameraFrame,ROTATE_180);
        flip(cameraFrame,cameraFrame,1);
        
        if (!cameraFrame.empty()){
            //run detection based on interval, track every other frame
            if (frameCount % detectionInterval == 0){
                fullFrameDetectionPoints.clear();
                RunModel(cameraFrame);
            } else {
                Mat grayFrame;
                cvtColor(cameraFrame, grayFrame, CV_RGB2GRAY);
                if (previousCamFrame.rows < 100){
                    grayFrame.copyTo(previousCamFrame);
                }
                ExtractPointsFromFrame(grayFrame);
                TrackDetections(grayFrame);
                grayFrame.copyTo(previousCamFrame);
            }
        }
        //return detections in comma seperated string
        string detectionList = "";
        for(int i = 0; i < detections.size(); i++){
            detectionList += detections[i].label + ",";
        }
        
        frameCount++;
        
        //convert to RGBA because its the only way I could get to work on Metal
        cvtColor(cameraFrame,cameraFrame,CV_RGB2RGBA);
        
        return ConvertToChar(detectionList);
    }
}

