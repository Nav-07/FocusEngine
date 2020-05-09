#include <SDL2/SDL.h>
#include <string>
#include "FocusEngine/FocusEngine.hpp"

class Example : public FocusEngine_EntryPoint {
private:
    EventLayer layer;
public:
    void init() override {
        this->constructWindow("Example", 640, 480);
    }
    void runEngine() override {
        layer.pollEvents();
        if (layer.eventOccured(eventType::quit))
            mIsRunning = false;
    }
    void destroy() override {}
protected:
};

int main() {
    runGame(new Example());
    return 0;
}
