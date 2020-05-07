#include "FocusEngine.hpp"

FocusEngine_EntryPoint::FocusEngine_EntryPoint() {
    this->init();
}
void FocusEngine_EntryPoint::runEngine() {
    this->runLoop();
}
FocusEngine_EntryPoint::~FocusEngine_EntryPoint() {
    this->destroy();
}
