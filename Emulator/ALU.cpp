//
//  ALU.cpp
//  Emulator
//
//  Created by Seán Hargadon on 17/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#include "ALU.h"


ALU::ALU()
{
    
}

void ALU::alu( bits in_0, bits in_1, bits sel, bool &V, bool &C, bool &N, bool &Z, bits &out_0 )
{
    if (sel[3] == false) Adder().add(in_0, in_1, sel, V, C, N, Z, out_0);
    else LogicUnit().logic(in_0, in_1, {sel[1], sel[2]}, out_0);
}
