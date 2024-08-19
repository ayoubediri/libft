#include "libft.h"

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
