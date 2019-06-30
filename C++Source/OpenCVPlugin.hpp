#ifndef OpenCVPlugin_hpp
#define OpenCVPlugin_hpp

#include <stdio.h>

__declspec(dllexport) int InitOpenCV(char* labels, char* pathToConfig, char* pathToWeights);
__declspec(dllexport) char* ProcessImageOpenCV(unsigned char* bytes, int width, int height, int detectionInterval);

unsigned char* GetCurrImage();

#endif /* OpenCVPlugin_hpp */

