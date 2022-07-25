#include "nee.h"

bool	operation0(bool oper, One_byte a, One_byte b)
{
	return (or(and(oper, xor(a.bit0, b.bit0)), and(not(oper), and(a.bit0, b.bit0))));
}

bool	operation1(bool oper, One_byte a, One_byte b)
{
	return (or(and(oper, xor(a.bit1, b.bit1)), and(not(oper), and(a.bit1, b.bit1))));
}

bool	operation2(bool oper, One_byte a, One_byte b)
{
	return (or(and(oper, xor(a.bit2, b.bit2)), and(not(oper), and(a.bit2, b.bit2))));
}

bool	operation3(bool oper, One_byte a, One_byte b)
{
	return (or(and(oper, xor(a.bit3, b.bit3)), and(not(oper), and(a.bit3, b.bit3))));
}

bool	operation4(bool oper, One_byte a, One_byte b)
{
	return (or(and(oper, xor(a.bit4, b.bit4)), and(not(oper), and(a.bit4, b.bit4))));
}

bool	operation5(bool oper, One_byte a, One_byte b)
{
	return (or(and(oper, xor(a.bit5, b.bit5)), and(not(oper), and(a.bit5, b.bit5))));
}

bool	operation6(bool oper, One_byte a, One_byte b)
{
	return (or(and(oper, xor(a.bit6, b.bit6)), and(not(oper), and(a.bit6, b.bit6))));
}

bool	operation7(bool oper, One_byte a, One_byte b)
{
	return (or(and(oper, xor(a.bit7, b.bit7)), and(not(oper), and(a.bit7, b.bit7))));
}

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

int	addition(short a, short b)
{
	One_byte	c;
	One_byte	d;
	One_byte	e;
	bool		carry;

	c.byte = a;
	d.byte = b;
	carry = 0;
	e.bit0 = add_bit(0, 1, c, d);
	carry = or(add_bit(0, 0, c, d), and(carry, add_bit(0, 1, c, d)));
	e.bit1 = xor(add_bit(1, 1, c, d), carry);
	carry = or(add_bit(1, 0, c, d), and(carry, add_bit(1, 1, c, d)));
	e.bit2 = xor(add_bit(2, 1, c, d), carry);
	carry = or(add_bit(2, 0, c, d), and(carry, add_bit(2, 1, c, d)));
	e.bit3 = xor(add_bit(3, 1, c, d), carry);
	carry = or(add_bit(3, 0, c, d), and(carry, add_bit(3, 1, c, d)));
	e.bit4 = xor(add_bit(4, 1, c, d), carry);
	carry = or(add_bit(4, 0, c, d), and(carry, add_bit(4, 1, c, d)));
	e.bit5 = xor(add_bit(5, 1, c, d), carry);
	carry = or(add_bit(5, 0, c, d), and(carry, add_bit(5, 1, c, d)));
	e.bit6 = xor(add_bit(6, 1, c, d), carry);
	carry = or(add_bit(6, 0, c, d), and(carry, add_bit(6, 1, c, d)));
	e.bit7 = xor(add_bit(7, 1, c, d), carry);
	return (e.byte);
}
