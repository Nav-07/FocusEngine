#pragma once
#include <string>

#include "RenderingContext.hpp"

class FocusEngine_EntryPoint {
protected:
    // init(): This method is called when the constructor of the derived class is called and is responsible for initializing game scripts and making threads, etc.
    virtual void init() {}
    // runLoop() method is responsible for updating, hadling-events and rendering onto the screen, this method requires a while loop inside to make this an actual game loop.
    virtual void runLoop() {}
    // destroy() method is resonsible for destroying everything, this method is called automatically along with destructor on the Object.
    virtual void destroy() {}
public:
    // The constructor method calls the init() method, this is weher the intialization happens.
    FocusEngine_EntryPoint();
    // runEngine() method calls the runLoop() method, this method handles events, updates game and render Objects.
    void runEngine();
    // The destructor, calls the destroy method.
    ~FocusEngine_EntryPoint();
private:
};
