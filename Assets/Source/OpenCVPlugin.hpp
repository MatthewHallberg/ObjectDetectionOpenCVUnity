#ifndef OpenCVPlugin_hpp
#define OpenCVPlugin_hpp

#include <stdio.h>

extern "C" {
    __declspec(dllexport) void Init(char* labels, char* pathToConfig, char* pathToWeights);
    __declspec(dllexport) char* ProcessImage(uchar* raw, int width, int height, bool isRGBA, int detectionInterval);
}

#endif /* OpenCVPlugin_hpp */
