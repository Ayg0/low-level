#include "general.h"

int add_int(int	a, int	b)
{
	char	*c;
	char	*d;
	char	e[4];
	int		*k;
	bool	carry;

	c = (char *)&a;
	d = (char *)&b;
	carry = 0;
	e[0] = addition(c[0], d[0], &carry);
	e[1] = addition(c[1], d[1], &carry);
	e[2] = addition(c[2], d[2], &carry);
	e[3] = addition(c[3], d[3], &carry);
	k = (int *)e;
	return (*k);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", add_int(atoi(av[1]), atoi(av[2])));
	else
		printf("wrong arguments\n");
}