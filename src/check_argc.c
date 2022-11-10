#include "libft/libft.h"

int check_argc(int argc)
{
	if (argc != 5 && argc != 6)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

