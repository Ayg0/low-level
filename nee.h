#ifndef NEE_H
#define NEE_H
#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct 
{
	union
    {
        struct {
            int bit0:1;
            int bit1:1;
            int bit2:1;
            int bit3:1;
            int bit4:1;
            int bit5:1;
            int bit6:1;
            int bit7:1;
        };
        unsigned char byte;
    };
} One_byte;

#endif