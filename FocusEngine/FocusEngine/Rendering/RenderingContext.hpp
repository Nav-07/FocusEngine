#pragma once
#include <SDL2/SDL.h>
#include <string>

// This object does all the renderer and window creation for the user.
class RenderingContext {
private:
    // screenTitle for the title of the screen.
    std::string screenTitle;
    // screenWidth and screenHeight for the dimensions of the screen.
    unsigned int screenWidth, screenHeight;
    // sdlWindow and sdlRenderer, these two objects are called from the SDL2 layer and are responsible for creating the window and the rendering context and handling all the inputs and stuff.
    SDL_Window* sdlWindow;
    SDL_Renderer* sdlRenderer;
    // instance describes the singleton pattern for this object and does 50% of the hard work, this is a static object and will have a static method.
    static RenderingContext* instance;
    // private costructor, because this is a singleton
    RenderingContext() {  }
    // isWindowOpen Variable, this is used to help the user determine if the close button was pressed and based on the value the user can continue his game. Initialized as False
    bool isWindowOpen = false;
public:
    // getInstance() is the static getter for the instance of singleton
    static RenderingContext* getInstance();
    // init(std::string screenTitle, unsigned int screenWidth, unsigned int screenHeight) method is responsible for initializing all the values described above and will be called in the entry point of the engine to start.
    void init(std::string screenTitle, unsigned int screenWidth, unsigned int screenHeight);
    // pollEvents() method is responsible for handling all the SDL2 events and sending the backend of the engine data regarding the window state and what is currently happening on the screen.
    void pollEvents();
    // destroy() method destroys the SDL2 and FocusEngine layer and deletes the instance variable to prevent any memory leaks.
    void destroy();
    // The getters for sdlWindow and sdlRenderer, these will be used in the sprite class and other animation based classes.
    SDL_Window* getWindow() { return sdlWindow; }
    SDL_Renderer* getRenderer() { return sdlRenderer; }
    // Get isWindowOpen value to run your engine.
    bool isOpen() { return isWindowOpen; }
    // Other getters for the user, if the values are required at any point
    unsigned int getScreenWidth() { return screenWidth; }
    unsigned int getScreenHeight() { return screenHeight; }
    std::string getScreenTitle() { return screenTitle; }
};
