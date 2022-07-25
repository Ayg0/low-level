#ifndef GENERAL_H
#define GENERAL_H
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

bool 	xor(bool a, bool b);
bool	or(bool a, bool b);
bool	and(bool a, bool b);
bool	not(bool a);
bool	nand(bool a, bool b);
int		addition(int a, int b, bool *carry);
int 	add_int(int	a, int	b);
#endif