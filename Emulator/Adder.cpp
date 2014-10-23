//
//  Adder.cpp
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#include "Adder.h"


Adder::Adder()
{
    
}

void Adder::addSlice( bool C_in, bool in_0, bool in_1, bits sel, bool &C_out, bool &S_out )
{
    bool and0 = in_1 && sel[0];
    bool and1 = !in_1 && sel[1];
    bool or0 = and0 || and1;
    
    FullAdder adder0 = FullAdder();
    adder0.add(in_0, or0, C_in, S_out, C_out);
}

void Adder::add( bits in_0, bits in_1, bits sel, bool &V, bool &C, bool &N, bool &Z, bits &out_0 )
{
    bool adder_C_out[32];
    bool adder_S_out[32];
    
    addSlice(sel[0], in_0[0], in_1[0], {sel[1], sel[2]}, adder_C_out[0], adder_S_out[0]);
    out_0[0] = adder_S_out[0];
    for (int i = 1; i < 32; i++) {
        addSlice(adder_C_out[i-1], in_0[i], in_1[i], {sel[1], sel[2]}, adder_C_out[i], adder_S_out[i]);
        out_0[i] = adder_S_out[i];
    }
    
    V = adder_C_out[31] ^ adder_C_out[30];
    C = adder_C_out[31];
    N = adder_S_out[31];
    Z = adder_S_out[0];
    for (int i = 1; i < 32; i++) {
        Z = Z | adder_S_out[i];
    }
    Z = !Z;
}


