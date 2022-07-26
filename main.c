#include "general.h"

int	main(int ac, char **av)
{	
	if (ac == 2)
		printf("%d\n", two_complement(atoi(av[1]), 0));
	else
		printf("wrong arguments\n");
}