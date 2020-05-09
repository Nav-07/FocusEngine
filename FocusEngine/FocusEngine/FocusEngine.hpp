#pragma once
#include <SDL2/SDL.h>
#include <string>

class FocusEngine_EntryPoint {
protected:
    SDL_Window* mWindow;
    SDL_Renderer* mRenderer;
    bool mIsRunning = false;
    
    void constructWindow(const std::string screenTitle, const int screenWidth, const int screenHeight);
public:
    virtual void init() = 0;
    virtual void runEngine() = 0;
    virtual void destroy() = 0;
    bool getIsRunning() { return mIsRunning; }
};

void runGame(FocusEngine_EntryPoint* entryPoint);
