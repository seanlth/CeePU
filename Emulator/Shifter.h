//
//  Shifter.h
//  Emulator
//
//  Created by Seán Hargadon on 25/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef __Emulator__Shifter__
#define __Emulator__Shifter__

#include <stdio.h>
#include "Helpers.h"

class Shifter {
public:
    Shifter();
    
    //00 - mov
    //10 - shift left
    //01 - shift right
    //11 - undef
    
    void shift(bits in_0, bits sel, bool I_R, bool I_L, bits &out_0);
};

#endif /* defined(__Emulator__Shifter__) */
