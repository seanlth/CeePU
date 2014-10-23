//
//  FlipFlop.h
//  Emulator
//
//  Created by Seán Hargadon on 11/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef __Emulator__FlipFlop__
#define __Emulator__FlipFlop__

#include <stdio.h>

class FlipFlop {
private:
    bool g;
    
public:
    FlipFlop();
    
    void latch(bool set, bool reset, bool &out_0);
    void input(bool in_0, bool clock, bool reset, bool &out_o);
};

#endif /* defined(__Emulator__FlipFlop__) */
