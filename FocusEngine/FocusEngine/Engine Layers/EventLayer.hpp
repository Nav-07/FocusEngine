#pragma once
#include <SDL2/SDL.h>

// the eventType object is used to check for the event, this is a FocusEngine DataType used in the EventLayer of the Engine.
enum class eventType { quit };
class EventLayer {
private:
public:
    // poll the events, using the SDL2 Events interface
    void pollEvents();
    // check for events occured, this also uses the sdl2 interface
    bool eventOccured(eventType type);
};
