#ifndef PLATFORMDATA_H
#define PlatformData

#include "SDL.h"
#include <string>
#include <iostream>

class PlatfrmData
{

public:
    PlatfrmData() ;

    std::string getPlatform();
    void printPlatform();

private:
    std::string currentPlatform;
};



#endif