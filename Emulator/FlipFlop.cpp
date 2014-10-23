//
//  FlipFlop.cpp
//  Emulator
//
//  Created by Seán Hargadon on 11/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#include "FlipFlop.h"


FlipFlop::FlipFlop()
{
    this->g = false;
}

void FlipFlop::latch(bool set, bool reset, bool &out_0)
{
//    bool nor0 = !(set || this->and1);
//    bool nor1 = !(reset || this->and0);
//    
//    this->and0 = nor0;
//    this->and1 = nor1;
//    
//    out_0 = nor1;
}


void FlipFlop::input(bool in_0, bool clock, bool reset, bool &out_o)
{
    reset = !reset;
    if ( clock && reset == true) {
        this->g = in_0;
        out_o = in_0;
    }
    
    out_o = this->g;
}