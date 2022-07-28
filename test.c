#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	main(int ac, char **av)
{
	int a = atoi(av[1]);
	int b = atoi(av[2]);
	return (printf("%d\n", (!(a/b) * b) + (!(b/a) * a)));
	if (abs(a - b) == (a - b))
		return (printf("%d\n", a));
	return (printf("%d\n", b));
}