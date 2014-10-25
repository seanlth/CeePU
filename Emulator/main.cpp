//
//  main.cpp
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#include <iostream>
#include <math.h>
#include "ALU.h"
#include "RegisterFile.h"

#include "Shifter.h"


bits a = UnumberInBits(1);
bits b = UnumberInBits(0);
bits r = UnumberInBits(0);


int main(int argc, const char * argv[])
{
    Shifter s = Shifter();
    
    s.shift(a, {1, 0}, false, false, r);
    
    printBits(r);
    
    s.shift(r, {0, 1}, true, false, r);
    
    printBits(r);

    
//    RegisterFile r = RegisterFile();
//    
//    bits a = UnumberInBits(0);
//    bits b = UnumberInBits(0);
//    
//    r.load(UnumberInBits(100), {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, true, true, a, b);
//    
//    
//    std::cout << UbitsToNumber(a) << std::endl;
//    std::cout << UbitsToNumber(b) << std::endl;
//    
//    r.load(UnumberInBits(101), {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, true, true, a, b);
//    
//    std::cout << UbitsToNumber(a) << std::endl;
//    std::cout << UbitsToNumber(b) << std::endl;

//    FlipFlop flip = FlipFlop();
//    
//    bool out = false;

    //flip.latch(false, true, out);

//    flip.input(false, false, false, out);
    //std::cout << out << std::endl;
    
//    for (int i = 0; i < 100; i++) {
//        //flip.latch(true, false, out);
//        flip.input( false, i%2, false, out);
//        std::cout << out << std::endl;
//    }

//    Adder adder = Adder();
//    
//    bool v;
//    bool n;
//    bool z;
//    bool c;
//    
//    bits result = numberInBits(0);
//    
//    ALU alu = ALU();
//    
//    alu.alu(UnumberInBits(100), UnumberInBits(100), {0, 1, 0, 0}, v, c, n, z, result);
//    
//    //std::cout << UbitsToNumber(result) << std::endl << (0xFFFFFFFF ^ 0xFFFFFFFF) << std::endl;
//    std::cout << UbitsToNumber(result) << std::endl;
//
//    
//    Register r = Register();
//    
//    printBits(UnumberInBits(100));
//    
//    r.save(UnumberInBits(100), true, 1, result);
//    r.save(UnumberInBits(0), false, 1, result);
//
//    std::cout << UbitsToNumber(result) << std::endl;

    
    return 0;
}
