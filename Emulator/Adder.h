//
//  Adder.h
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef __Emulator__Adder__
#define __Emulator__Adder__

#include <stdio.h>
#include "Helpers.h"
#include "FullAdder.h"

class Adder {
public:
    Adder();
    
    //000 - mov
    //100 - increment;
    //010 - add
    //110 - add incremnet;
    //001 - subract decrement
    //101 - subtact
    //011 - decrement
    //111 - mov
    
    void addSlice( bool C_in, bool in_0, bool in_1, bits sel, bool &C_out, bool &S_out );
    void add(bits in_0, bits in_1, bits sel, bool &V, bool &C, bool &N, bool &Z, bits &out_0 );
    
};

#endif /* defined(__Emulator__Adder__) */
