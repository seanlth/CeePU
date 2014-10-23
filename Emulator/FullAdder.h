//
//  FullAdder.h
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef __Emulator__FullAdder__
#define __Emulator__FullAdder__

#include <stdio.h>

class FullAdder {
public:
    FullAdder();
    
    void add(bool in_0, bool in_1, bool in_2, bool &sum, bool &carry);
};

#endif /* defined(__Emulator__FullAdder__) */
