//
//  giaiphuongtrinh.c
//  Function18-3
//
//  Created by Khoa Nguyen on 3/18/20.
//  Copyright © 2020 Khoa Nguyen. All rights reserved.
//

#include "giaiphuongtrinh.h"
#include <stdio.h>
#include <math.h>

void giaiphuongtrinh(float a, float b, float c)
{
    float delta = 0.0;
    if (a == 0 & b != 0 & c != 0)
    {
        printf("x = %.2f\n", (-c)/b);
    }
    else if (a == 0 & b ==0 & c==0)
    {
        printf("Phuong trinh co vo so nghiem\n");
    }
    else
    {
        delta = b*b - 4*a*c;
    }
        if (delta == 0){
            printf("x = %.2f\n", (-b)/(2*a));
        } else if (delta > 0)
        {
            printf("x1 = %.2f\n", ((-b) + sqrtf(delta)) / (2*a));
            printf("x2 = %.2f\n", ((-b) - sqrtf(delta)) / (2*a));
        }
        else
            printf("phuong trinh vo nghiem\n");
}
