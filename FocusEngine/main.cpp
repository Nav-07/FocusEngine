#include "FocusEngine.hpp"

#include <iostream>
using namespace std;

class Example : public FocusEngine_EntryPoint {
protected:
    void init() override {
        RenderingContext::getInstance()->init("Example", 640, 480);
    }
    void runLoop() override {
        RenderingContext::getInstance()->pollEvents();
    }
    void destroy() override {
        RenderingContext::getInstance()->destroy();
    }
public:
    Example(): FocusEngine_EntryPoint() {
    }
};
int main() {
    runGame(new Example(), RenderingContext::getInstance()->isOpen());
}
