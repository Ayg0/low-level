#include "subs.h"

char	byte_negative(char a, char add)
{
	One_byte 	c;
	One_byte	d;
	char		i;
	char		rest;

	c.byte = a; 
	i = 0;
	d.byte = 0;
	while (not(equal_byte(i, 8)))
	{
		c.byte = shift_byte(c.byte, &rest);
		rest = not(rest);
		d.byte = shift_byte(d.byte, &rest);
		i = add_int(i, 1);
	}
	rest = 0;
	d.byte = addition(d.byte, add, (bool *)&rest);
	return (d.byte);
}

int	two_complement(int a, bool bytes)
{
	char	*c;
	int		*k;

	if (equal_byte(bytes, 0))
		return (byte_negative(a, 1));
	c = (char *)&a;
	c[0] = byte_negative(c[0], 0);
	c[1] = byte_negative(c[1], 0);
	c[2] = byte_negative(c[2], 0);
	c[3] = byte_negative(c[3], 0);
	k = (int *)c;
	return (add_int(*k, 1));
}

int	subs(int a, int b)
{
	return (add_int(a, two_complement(b, 1)));
}