//
//  Emulator.hpp
//  Chip8Emulator
//

#ifndef Emulator_hpp
#define Emulator_hpp

#include "CHIP.h"

class Debugger;

class Emulator {
    friend class Debugger;
public:
    Emulator();
    ~Emulator();
    void run();
    void render();
    void swap();
    bool loadRom();
    bool hasFocus() { return windowFocused; };
    void disableDebugger();
private:
    void initWindow();
    void initEmulator();
    void handleWindowEvent(SDL_Event& ev);
    void handleKeyEvent(SDL_Event& ev);

    SDL_Window* window = nullptr;
    int windowID;
    SDL_Renderer* renderer = nullptr;
    SDL_Texture* screenTexture = nullptr;
    CPU* cpu = nullptr;
    
    Debugger* debugger = nullptr;
    
    bool windowFocused = false;
    bool hasDebugger = false;
};

#endif /* Emulator_hpp */
