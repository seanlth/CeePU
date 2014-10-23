//
//  FullAdder.cpp
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#include "FullAdder.h"


FullAdder::FullAdder()
{
    
}

void FullAdder::add(bool in_0, bool in_1, bool in_2, bool &sum, bool &carry)
{
    bool xor1_out = in_0 != in_1;
    bool and1_out = in_0 && in_1;
    bool xor2_out = xor1_out != in_2;
    bool and2_out = xor1_out && in_2;
    
    sum = xor2_out;
    carry = and1_out || and2_out;
}
