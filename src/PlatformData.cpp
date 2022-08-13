#include "PlatformData.h"


PlatfrmData::PlatfrmData() : currentPlatform("Null")
{
    currentPlatform = getPlatform();
}

std::string PlatfrmData::getPlatform()
{
    const char *cPlatform = SDL_GetPlatform();
    std::string sPlatform(cPlatform);
    currentPlatform = sPlatform;
    return currentPlatform;
};

void PlatfrmData::printPlatform()
{
    if (currentPlatform != "")
        std::cout << "The detected platform is : " << currentPlatform << std::endl;
    else
        std::cout << "No System Platform Detected." << std::endl;
}