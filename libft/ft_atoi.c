#include "libft.h"

int	ft_atoi(char *str)
{
	long	n;
	long	s;
	int		i;

	n = 0;
	s = 1;
	i = 0;
	if (*str == '-')
	{
		s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + str[i++] - '0';
	n *= s;
	return ((int)(n));
}
