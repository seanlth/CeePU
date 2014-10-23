//
//  LogicUnit.h
//  Emulator
//
//  Created by Seán Hargadon on 16/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef __Emulator__LogicUnit__
#define __Emulator__LogicUnit__

#include <stdio.h>
#include "Helpers.h"

class LogicUnit {
public:
    LogicUnit();
    
    
    //00 - and
    //10 - or
    //01 - xor
    //11 - not

    
    
    void logicSlice( bool in_0, bool in_1, bits sel, bool &out_0 );
    void logic( bits in_0, bits in_1, bits sel, bits &out_0 );
    
};

#endif /* defined(__Emulator__LogicUnit__) */
