#include "nee.h"

bool	nand(bool a, bool b)
{
	return (!(a * b));
}

bool	not(bool a)
{
	return (nand(a, a));
}

bool	and(bool a, bool b)
{
	return (not(nand(a, b)));
}

bool	or(bool a, bool b)
{
	return (nand(not(a), not(b)));
}

bool xor(bool a, bool b)
{
	return (or(and(not(a), b), and(a, not(b))));
}

int	addition(int a, int b)
{
	
	return;
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", addition(atoi(av[1]), atoi(av[2])));
	else
		printf("wrong arguments\n");
}