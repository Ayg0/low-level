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

int	main(int ac, char **av)
{
	int	i;

	while (i < 2147483647 / 2)
	{
		if (i + i != add_int(i, i))
		{
			printf("%d:%d != %d\n", i, i + i, add_int(i, i));
			return (1);
		}
		printf("%d\n", i);
		i++;
	}
	//if (ac == 3)
	//	printf("%d\n", add_int(atoi(av[1]), atoi(av[2])));
	//else
	//	printf("wrong arguments\n");
}