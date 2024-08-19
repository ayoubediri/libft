#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s2[i] || s1[i]) && i < n)
	{
		if (s2[i] != s1[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
