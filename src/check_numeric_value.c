#include "libft/libft.h"

int	check_numeric_value(char *n)
{
	int	i;

	i = 0;
	while (n[i])
	{
		if (!ft_isdigit(n[i]))
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
