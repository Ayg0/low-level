#include "shift.h"

char	shift_byte(char byte, char *rest)
{
	One_byte	a;
	bool		c;

	a.byte = byte;
	c = a.bit7;
	a.bit7 = a.bit6;
	a.bit6 = a.bit5;
	a.bit5 = a.bit4;
	a.bit4 = a.bit3;
	a.bit3 = a.bit2;
	a.bit2 = a.bit1;
	a.bit1 = a.bit0;
	a.bit0 = *rest;
	*rest = c;
	return (a.byte);
}

int	shift_by_one(int a)
{
	unsigned char			*c;
	int				*k;
	char			d;

	c = (unsigned char *)&a;
	d = 0;
	c[0] = shift_byte(c[0], &d);
	c[1] = shift_byte(c[1], &d);
	c[2] = shift_byte(c[2], &d);
	c[3] = shift_byte(c[3], &d);
	k = (int *)c;
	return (*k);
}

int	shift_int(int a, int moves)
{
	int	i;

	i = 0;
	while (not(equal_int(i, moves)))
	{
		a = shift_by_one(a);
		i = add_int(i, 1);
	}
	return (a);
}