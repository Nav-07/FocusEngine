#pragma once
#include <SDL2/SDL.h>
#include <string>

// The Entry Point for the Game Engine, this single class game engine, has just one abstract class that is used to initialize the basis of the game.
// This class handles the construction of window and all the objects are instantiated inside this class.
class FocusEngine_EntryPoint {
protected:
    // the SDL_Window* is the SDL object for the window
    SDL_Window* mWindow;
    // The SDL_Renderer* is the SDL object for the renderer, this is used to call the render functions.
    SDL_Renderer* mRenderer;
    // This is used to notify the foundation, whether the engine is open or not.
    bool mIsRunning = false;
    
    // constructWindow is used to intialize the SDL Context and create a window and renderer, this is called in the init() method by the user.
    void constructWindow(const std::string screenTitle, const int screenWidth, const int screenHeight);
public:
    // the abstract methods for init(), runEngine(), destroy();
    virtual void init() = 0;
    virtual void runEngine() = 0;
    virtual void destroy() = 0;
    
    // This is used by the runGame() function to run the main game loop.
    bool getIsRunning() { return mIsRunning; }
};

// this is used to run the engine, overriding the FocusEngine_EntryPoint object
void runGame(FocusEngine_EntryPoint* entryPoint);
