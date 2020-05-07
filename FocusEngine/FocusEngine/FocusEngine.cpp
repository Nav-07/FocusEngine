#include "FocusEngine.hpp"

FocusEngine_EntryPoint::FocusEngine_EntryPoint(std::string screenTitle, unsigned int screenWidth, unsigned int screenHeight) {
    this->screenTitle = screenTitle;
    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;
    
    this->init();
}
void FocusEngine_EntryPoint::runEngine() {
    this->runLoop();
}
FocusEngine_EntryPoint::~FocusEngine_EntryPoint() {
    this->destroy();
}
