//
//  ALU.h
//  Emulator
//
//  Created by Seán Hargadon on 17/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef __Emulator__ALU__
#define __Emulator__ALU__

#include <stdio.h>
#include "Helpers.h"
#include "Adder.h"
#include "LogicUnit.h"


class ALU {
public:
    ALU();
    
    //0000 - mov
    //1000 - increment
    //0100 - add
    //1100 - add and increment
    //0010 - subract decrement
    //1010 - subtact
    //0110 - decrement
    //1110 - mov
    
    //0001 - and
    //0101 - or
    //0011 - xor
    //0111 - not

    
    void alu( bits in_0, bits in_1, bits sel, bool &V, bool &C, bool &N, bool &Z, bits &out_0 );
};

#endif /* defined(__Emulator__ALU__) */
