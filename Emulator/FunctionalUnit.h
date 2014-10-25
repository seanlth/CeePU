//
//  FunctionalUnit.h
//  Emulator
//
//  Created by Seán Hargadon on 25/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef __Emulator__FunctionalUnit__
#define __Emulator__FunctionalUnit__

#include <stdio.h>
#include "ALU.h"
#include "RegisterFile.h"
#include "Shifter.h"

class FunctionalUnit {
private:
    RegisterFile r;
    ALU alu;
public:
    FunctionalUnit();
    
    void function( bits in_0, bits in_1, bits sel, bool &V, bool &C, bool &N, bool &Z, bits &out_0 );
    
    
};

#endif /* defined(__Emulator__FunctionalUnit__) */
