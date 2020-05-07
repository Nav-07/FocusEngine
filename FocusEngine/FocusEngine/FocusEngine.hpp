#pragma once
#include <string>

class FocusEngine_EntryPoint {
protected:
    virtual void init() {}
    virtual void runLoop() {}
    virtual void destroy() {}
public:
    FocusEngine_EntryPoint();
    void runEngine();
    ~FocusEngine_EntryPoint();
private:
};
