#include "multiplyer.h"

int	shift_by(One_byte byte, int number)
{
	int		i;
	char	rest;

	i = 0;
	while (not(equal_int(i, number)))
	{
		rest = 0;
		byte.byte = shift_byte(byte.byte, &rest);
		add_int(i, 1);
	}
	return (byte.byte);
}

int	multiplyer8(char a, char b)
{
	One_byte 	input[2];
	One_byte 	output[8];
	char		rest;
	bool		carry;
	int			i;

	input[0].byte = a;
	input[1].byte = b;
	i = 0;
	while (not(equal_int(i, 8)))
	{
		rest = carry = 0;
		input[1].byte = shift_byte(input[1].byte, &rest);
		if (rest)
			output[0].byte = addition(output[0].byte, shift_by(input[0], subs(8, i)), &carry);
		else
			output[0].byte = addition(output[0].byte, 0, &carry);
		add_int(i, 1);
	}
	return (output[0].byte);
}