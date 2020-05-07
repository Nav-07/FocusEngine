#pragma once
#include <string>

class FocusEngine_EntryPoint {
protected:
    virtual void init() {}
    virtual void runLoop() {}
    virtual void destroy() {}
public:
    FocusEngine_EntryPoint(std::string screenTitle = "Untited", unsigned int screenWidth = 640, unsigned int screenHeight = 480);
    void runEngine();
    ~FocusEngine_EntryPoint();
private:
    unsigned int screenWidth, screenHeight;
    std::string screenTitle;
};
