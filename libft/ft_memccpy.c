#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	t;

	d = dest;
	s = src;
	t = c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i++] == t)
			return ((void *)(d + i));
	}
	return (0);
}
