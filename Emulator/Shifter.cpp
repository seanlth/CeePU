//
//  Shifter.cpp
//  Emulator
//
//  Created by Seán Hargadon on 25/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#include "Shifter.h"


Shifter::Shifter()
{
    
}

void Shifter::shift(bits in_0, bits sel, bool I_R, bool I_L, bits &out_0)
{
    bool out[32];
    
    if (sel[0] == 0 && sel[1] == 0) out[0] = in_0[0], out[31] = in_0[31];
    else if (sel[0] == 1 && sel[1] == 0) out[0] = I_L, out[31] = in_0[30];
    else if (sel[0] == 0 && sel[1] == 1) out[0] = in_0[1], out[31] = I_R;
    else if (sel[0] == 1 && sel[1] == 1) out[0] = 0, out[31] = 0;
    
    out_0[0] = out[0];
    out_0[31] = out[31];

    for (int i = 1; i < 31; i++) {
        if (sel[0] == 0 && sel[1] == 0) out[i] = in_0[i];
        else if (sel[0] == 1 && sel[1] == 0) out[i] = in_0[i-1];
        else if (sel[0] == 0 && sel[1] == 1) out[i] = in_0[i+1];
        else if (sel[0] == 1 && sel[1] == 1) out[i] = 0;
        
        out_0[i] = out[i];
    }
}
