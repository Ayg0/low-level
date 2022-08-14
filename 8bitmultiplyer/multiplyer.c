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
		i = add_int(i, 1);
	}
	return (byte.byte);
}

int	multiplyer8(char a, char b)
{
	One_byte 	input[2] = {0};
	int			output[2] = {0};
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
			output[0] = addition(output[0], shift_by(input[0], subs(7, i)), &carry);
		else
			output[0] = addition(output[0], 0, &carry);
		i = add_int(i, 1);
	}
	return (output[0]);
}

int	one_step_multip(int a, char b)
{
	char	*c;
	int		i;
	int		output;

	c = (char *)&a;
	i = 3;
	output = 0;
	while (not(equal_int(i, -1)))
	{
		output = add_int(multiplyer8(c[i], b), output);
		printf("%d/%d/%d/%d/%d\n", output, a, i, c[i], b);
		output = shift_int(output, multiplyer8(8, i));
		printf("''%d\n", output);
		i = subs(i, 1);
	}
	return (output);
}

int	multiply(int a, int b)
{
	char	*d;
	int		output[2] = {0};
	int		i, j;

	d = (char *)&b;
	i = 3;
	while (not(equal_int(i, -1)))
	{
		j = 0;
		printf("%d\n", output[0]);
		output[0] = one_step_multip(a, d[i]);
		output[0] = shift_int(output[0], multiplyer8(8, i));
		output[1] = add_int(output[1], output[0]);
		i--;
	}
	return (output[0]);
}