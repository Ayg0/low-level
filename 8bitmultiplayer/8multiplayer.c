#include "multiplyer.h"

char	multiply(One_byte a, One_byte b)
{
	One_byte e;

	e.bit0 = 
}

int	multiplyer8(char a, char b)
{
	One_byte input[2];
	One_byte output[8];

	input[0].byte = a;
	input[1].byte = b;
	output[0].byte = multiply(input[0], input[1]); 
}