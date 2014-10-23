//
//  RegisterFile.h
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef __Emulator__RegisterFile__
#define __Emulator__RegisterFile__

#include <stdio.h>
#include "Helpers.h"
#include "Register.h"

class RegisterFile {
private:
    int getRegister(bits reg);
    
public:
    RegisterFile();
    std::vector<Register> registers;
    
    void load(bits in_0, bits a_sel, bits b_sel, bool load, bool clk, bits &a_out, bits &b_out);
};

#endif /* defined(__Emulator__RegisterFile__) */
