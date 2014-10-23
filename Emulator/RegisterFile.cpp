//
//  RegisterFile.cpp
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#include "RegisterFile.h"


RegisterFile::RegisterFile()
{
    for (int i = 0; i < 32; i++) {
        this->registers.push_back(Register());
    }
}


void RegisterFile::load(bits in_0, bits a_sel, bits b_sel, bool load, bool clk, bits &a_out, bits &b_out)
{
    for (int i = 0; i < 32; i++) {
        if ( getRegister( a_sel ) == i ) this->registers[i].save(in_0, true, clk, a_out);
    }
    
    this->registers[getRegister( b_sel )].save(in_0, false, clk, b_out);
}

int RegisterFile::getRegister(bits reg)
{
    int num = 0;
    
    int size = 0;
    
    for (int i = 0; i < 5; i++) {
        if ( reg[i] == true) {
            size = i;
        }
    }
    //size--;
    
    for (int i = size; i >= 0; i--)
    {
        if (reg[i]) {
            num = num*2 + 1;
        }
        else {
            num = num*2;
        }
    }
    return num;
}
