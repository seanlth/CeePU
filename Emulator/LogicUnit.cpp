//
//  LogicUnit.cpp
//  Emulator
//
//  Created by Seán Hargadon on 16/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#include "LogicUnit.h"


LogicUnit::LogicUnit()
{
    
}

void LogicUnit::logicSlice(bool in_0, bool in_1, bits sel, bool &out_0)
{
    if (sel[1] == false && sel[0] == false) out_0 = in_0 && in_1;
    else if (sel[1] == false && sel[0] == true)
        out_0 = in_0 || in_1;
    else if (sel[1] == true && sel[0] == false) out_0 = in_0 ^ in_1;
    else if (sel[1] == true && sel[0] == true)
        out_0 = !in_0 ;
}

void LogicUnit::logic( bits in_0, bits in_1, bits sel, bits &out_0 )
{
    bool logic_out[32];

    for (int i = 0; i < 32; i++) {
        logicSlice(in_0[i], in_1[i], sel, logic_out[i]);
        out_0[i] = logic_out[i];
    }
    
}
