#include "Window.hpp"

static SDL_Event event;
Window::Window(std::string screenTitle, unsigned int screenWidth, unsigned int screenHeight) {
    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;
    this->screenTitle = screenTitle;
}
void Window::constructScreen() {
    window = SDL_CreateWindow(screenTitle.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, 0);
}
void Window::updateScreen() {
    SDL_PollEvent(&event);
}
Window::~Window() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
}
SDL_Window* Window::getWindow() {
    return window;
}
SDL_Renderer* Window::getRenderer() {
    return renderer;
}
