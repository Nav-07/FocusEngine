#pragma once
#include <SDL2/SDL.h>
#include <string>

class Window {
private:
    unsigned int screenWidth;
    unsigned int screenHeight;
    std::string screenTitle;
    
    SDL_Window* window;
    SDL_Renderer* renderer;
public:
    Window(std::string screenTitle, unsigned int screenWidth, unsigned int screenHeight);
    void constructScreen();
    void updateScreen();
    ~Window();
    
    SDL_Window* getWindow();
    SDL_Renderer* getRenderer();
};
