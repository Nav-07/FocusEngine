#include "FocusEngine.hpp"

void FocusEngine_EntryPoint::constructWindow(const std::string screenTitle, const int screenWidth, const int screenHeight) {
    // the SDL2 intialize method
    SDL_Init(SDL_INIT_EVERYTHING);
    // Create the window based on the parameters passed.
    mWindow = SDL_CreateWindow(screenTitle.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
    // Create the renderer using the window
    mRenderer = SDL_CreateRenderer(mWindow, -1, 0);
    // Set the window running to true
    mIsRunning = true;
}

void runGame(FocusEngine_EntryPoint* entryPoint) {
    // intialize the engine and all the game objects.
    entryPoint->init();
    // the main game loop
    while (entryPoint->getIsRunning()) {
        entryPoint->runEngine();
    }
    // destroy the engine
    entryPoint->destroy();
}
