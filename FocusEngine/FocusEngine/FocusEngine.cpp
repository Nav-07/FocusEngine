#include "FocusEngine.hpp"

void FocusEngine_EntryPoint::constructWindow(const std::string screenTitle, const int screenWidth, const int screenHeight) {
    mWindow = SDL_CreateWindow(screenTitle.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
    mRenderer = SDL_CreateRenderer(mWindow, -1, 0);
    mIsRunning = true;
}

void runGame(FocusEngine_EntryPoint* entryPoint) {
    entryPoint->init();
    while (entryPoint->getIsRunning()) {
        entryPoint->runEngine();
    }
    entryPoint->destroy();
}
