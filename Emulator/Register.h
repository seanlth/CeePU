//
//  Register.h
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef __Emulator__Register__
#define __Emulator__Register__

#include <stdio.h>
#include <iostream>
#include "Helpers.h"
#include "FlipFlop.h"

class Register {
public:
    Register();
    
    std::vector<FlipFlop> flip_flops;
    
    void save(bits in_0, bool load, bool clk, bits &out_0);
};


#endif /* defined(__Emulator__Register__) */
