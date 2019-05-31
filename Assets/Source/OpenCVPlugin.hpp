#ifndef OpenCVPlugin_hpp
#define OpenCVPlugin_hpp

#include <stdio.h>

extern "C" {
    __declspec(dllexport) void Init(char* labels);
    __declspec(dllexport) char* ProcessImage(Color32* raw, int width, int height);
}

#endif /* OpenCVPlugin_hpp */

