#include "addition.h"

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