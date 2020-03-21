//
//  program.c
//  Tachbit
//
//  Created by Khoa Nguyen on 3/21/20.
//  Copyright © 2020 Khoa Nguyen. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>
#include <memory.h>
#include "program.h"

void tachbit(int16_t X)
{
//    int16_t X = 0x1234;
    int8_t* X_low = &X;
    int8_t* X_high = X_low + 1;
    
    printf("X low 8 bit: %2X\t\n", *X_low);
    printf("X high 8 bit: %2X\t\n", *X_high);
}

int tachbit2(void)
{
    int16_t X;
    printf("Nhap so can tach bit: ");
    scanf("%6X", &X);
    int8_t* X_low = &X;
    int8_t* X_high = X_low + 1;
    
    printf("X low 8 bit: %2X\t\n", *X_low);
    printf("X high 8 bit: %2X\t\n", *X_high);
    return 0;
}
