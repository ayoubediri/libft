#include "libft.h"

void	*ft_memchr(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	t;

	i = 0;
	t = c;
	p = s;
	while (i < n)
	{
		if (p[i] == t)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}
