#include "addition.h"

void	set_opers(bool (*f[8])(bool oper, One_byte a, One_byte b))
{
	f[0] = operation0;
	f[1] = operation1;
	f[2] = operation2;
	f[3] = operation3;
	f[4] = operation4;
	f[5] = operation5;
	f[6] = operation6;
	f[7] = operation7;
}

int	add_bit(int i, bool oper, One_byte c, One_byte d)
{
	bool (*operation[8])(bool oper, One_byte a, One_byte b);

	set_opers(operation);

	return (operation[i](oper, c, d));
}

int	addition(int a, int b, bool *carry)
{
	One_byte	c;
	One_byte	d;
	One_byte	e;

	c.byte = a;
	d.byte = b;
	e.bit0 = xor(add_bit(0, 1, c, d), *carry);
	*carry = or(add_bit(0, 0, c, d), and(*carry, add_bit(0, 1, c, d)));
	e.bit1 = xor(add_bit(1, 1, c, d), *carry);
	*carry = or(add_bit(1, 0, c, d), and(*carry, add_bit(1, 1, c, d)));
	e.bit2 = xor(add_bit(2, 1, c, d), *carry);
	*carry = or(add_bit(2, 0, c, d), and(*carry, add_bit(2, 1, c, d)));
	e.bit3 = xor(add_bit(3, 1, c, d), *carry);
	*carry = or(add_bit(3, 0, c, d), and(*carry, add_bit(3, 1, c, d)));
	e.bit4 = xor(add_bit(4, 1, c, d), *carry);
	*carry = or(add_bit(4, 0, c, d), and(*carry, add_bit(4, 1, c, d)));
	e.bit5 = xor(add_bit(5, 1, c, d), *carry);
	*carry = or(add_bit(5, 0, c, d), and(*carry, add_bit(5, 1, c, d)));
	e.bit6 = xor(add_bit(6, 1, c, d), *carry);
	*carry = or(add_bit(6, 0, c, d), and(*carry, add_bit(6, 1, c, d)));
	e.bit7 = xor(add_bit(7, 1, c, d), *carry);
	*carry = or(add_bit(7, 0, c, d), and(*carry, add_bit(7, 1, c, d)));
	return (e.byte);
}
