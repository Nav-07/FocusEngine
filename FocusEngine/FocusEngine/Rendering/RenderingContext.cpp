#include "RenderingContext.hpp"

// initialize all the static variables
RenderingContext* RenderingContext::instance = nullptr;
// the event variable is used to poll events and detect and changes in the state of the window.
static SDL_Event event;
RenderingContext* RenderingContext::getInstance() {
    if (instance == nullptr)
        instance = new RenderingContext();
    return instance;
}
void RenderingContext::init(std::string screenTitle, unsigned int screenWidth, unsigned int screenHeight) {
    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;
    this->screenTitle = screenTitle;
    sdlWindow = SDL_CreateWindow(screenTitle.c_str()
                                 , SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
    sdlRenderer = SDL_CreateRenderer(sdlWindow, -1, 0);
    this->isWindowOpen = true;
}
void RenderingContext::pollEvents() {
    SDL_PollEvent(&event);
    if (event.type == SDL_QUIT)
        isWindowOpen = false;
}
void RenderingContext::destroy() {
    // Destroy the SDL2 Window Layer
    SDL_DestroyWindow(sdlWindow);
    // Destroy the SDL2 Renderer Layer
    SDL_DestroyRenderer(sdlRenderer);
    // Destroy SDL2 Layer
    SDL_Quit();
}
