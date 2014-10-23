//
//  Helpers.h
//  Emulator
//
//  Created by Seán Hargadon on 09/10/2014.
//  Copyright (c) 2014 Seán Hargadon. All rights reserved.
//

#ifndef Emulator_Helpers_h
#define Emulator_Helpers_h

#include <vector>
#include <iostream>

typedef std::vector<bool> bits;

static void printBits(bits bit_num)
{
    for (int i = 31; i >= 0; i--) {
        std::cout << bit_num[i];
    }
    std::cout << std::endl;
}

static bits UnumberInBits(unsigned int num)
{
    bits bit_num;
    for (int i = 0; i < 32; i++) {
        bit_num.push_back(0);
    }
    
    for (int i = 0; num != 0; i++) {
        bit_num[i] = num % 2;
        num = num / 2;
    }
    
    return bit_num;
}

static bits numberInBits(int num)
{
    bits bit_num;
    for (int i = 0; i < 32; i++) {
        bit_num.push_back(0);
    }
    
    for (int i = 0; num != 0; i++) {
        bit_num[i] = num % 2;
        num = num / 2;
    }
    
    return bit_num;
}

static unsigned int UbitsToNumber(bits bit_num)
{
    unsigned num = 0;
    
    int size = 0;
    
    for (int i = 0; i < 32; i++) {
        if ( bit_num[i] == true) {
            size = i;
        }
    }
    //size--;
    
    for (int i = size; i >= 0; i--)
    {
        if (bit_num[i]) {
            num = num*2 + 1;
        }
        else {
            num = num*2;
        }
    }
    return num;
}

static int bitsToNumber(bits bit_num)
{
    int num = 0;
    
    int size = 0;
    
    for (int i = 0; i < 32; i++) {
        if ( bit_num[i] == true) {
            size = i;
        }
    }
    //size--;
    
    for (int i = size; i >= 0; i--)
    {
        if (bit_num[i]) {
            num = num*2 + 1;
        }
        else {
            num = num*2;
        }
    }
    return num;
}


#endif
