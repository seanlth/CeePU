//
//  Register.cpp
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#include "Register.h"


Register::Register()
{
    for (int i = 0; i < 32; i++) {
        this->flip_flops.push_back(FlipFlop());
    }
}

void Register::save(bits in_0, bool load, bool clk, bits &out_0)
{
    bool out[32];
    
    for (int i = 0; i < 32; i++) {
        this->flip_flops[i].input(in_0[i], clk, load, out[i]);
        out_0[i] = out[i];
    }
    
}
