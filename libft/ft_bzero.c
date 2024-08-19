#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
		p[i++] = '\0';
}
