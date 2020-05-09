#include <SDL2/SDL.h>
#include <string>
#include "FocusEngine/FocusEngine.hpp"

class Example : public FocusEngine_EntryPoint {
private:
public:
    SDL_Event event;
    void init() override {
        this->constructWindow("Example", 640, 480);
    }
    void runEngine() override {
        SDL_PollEvent(&event);
    }
    void destroy() override {}
protected:
};

int main() {
    runGame(new Example());
    return 0;
}
