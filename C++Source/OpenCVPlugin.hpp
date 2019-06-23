#ifndef OpenCVPlugin_hpp
#define OpenCVPlugin_hpp

#include <stdio.h>

extern "C" {
    __declspec(dllexport) void Init(char* labels, char* pathToConfig, char* pathToWeights);
    __declspec(dllexport) char* ProcessImage(unsigned char* bytes, int width, int height, bool isRGBA, int detectionInterval);
}

#endif /* OpenCVPlugin_hpp */

