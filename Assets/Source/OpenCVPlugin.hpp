//
//  OpenCVPlugin.hpp
//  opencvPlugin
//
//  Created by matthew hallberg on 5/28/19.
//  Copyright © 2019 matthew hallberg. All rights reserved.
//

#ifndef OpenCVPlugin_hpp
#define OpenCVPlugin_hpp

#include <stdio.h>

extern "C" {
    __declspec(dllexport) char* ProcessImage(Color32* raw, int width, int height){
}

#endif /* OpenCVPlugin_hpp */
