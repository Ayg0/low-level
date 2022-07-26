#include "comparator.h"

bool	equal_byte(char a, char b)
{
	One_byte	c;
	One_byte	d;
	char		res;

	c.byte = a;
	d.byte = b;
	res = 1;
	res = and(not(or(xor(c.bit0, d.bit0), xor(c.bit1, d.bit1))), res);
	res = and(not(or(xor(c.bit2, d.bit2), xor(c.bit3, d.bit3))), res);
	res = and(not(or(xor(c.bit4, d.bit4), xor(c.bit5, d.bit5))), res);
	res = and(not(or(xor(c.bit6, d.bit6), xor(c.bit7, d.bit7))), res);
	return (res);
}

bool	equal_int(int a, int b)
{
	char	*c;
	char	*d;
	bool	res;

	c = (char *)&a;
	d = (char *)&b;
	res = and(and(equal_byte(c[0], d[0]), equal_byte(c[1], d[1])),
		and(equal_byte(c[2], d[2]), equal_byte(c[3], d[3])));
	return	(res);
}