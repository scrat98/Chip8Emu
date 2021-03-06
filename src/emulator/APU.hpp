//
//  APU.hpp
//  Chip8Emulator
//

#ifndef APU_hpp
#define APU_hpp

#include "CHIP.h"

class APU {
public:
    APU();
    ~APU();
    void reset();
    void playSound();
    void pauseSound();
};

#endif /* APU_hpp */
