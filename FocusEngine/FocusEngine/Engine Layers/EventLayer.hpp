#pragma once
#include <SDL2/SDL.h>

enum class eventType { quit };
class EventLayer {
private:
public:
    // poll the events, using the SDL2 Events interface
    void pollEvents();
    // check for events occured, this also uses the sdl2 interface
    bool eventOccured(eventType type);
};
