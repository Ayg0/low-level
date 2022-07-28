#include "general.h"

int	main(int ac, char **av)
{	
	if (ac == 3)
		printf("%d\n", multiplyer8(atoi(av[1]), atoi(av[2])));
	else
		printf("wrong arguments\n");
}