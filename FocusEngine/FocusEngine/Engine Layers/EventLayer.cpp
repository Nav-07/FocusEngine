#include "EventLayer.hpp"

// the  SDL_Event object is used to poll sdl2 events.
static SDL_Event event;
void EventLayer::pollEvents() {
    // poll events.
    SDL_PollEvent(&event);
}
bool EventLayer::eventOccured(eventType type) {
    // the event type, converted from the eventType enum.
    SDL_EventType t;
    switch (type) {
        // the quit event
        case eventType::quit:
            t = SDL_QUIT;
            break;
        default:
            break;
    }
    // if the event has occured return true
    if (event.type == t)
        return true;
    else // else false
        return false;
}
