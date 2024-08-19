#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
		p[i++] = c;
	return (s);
}
