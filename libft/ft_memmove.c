#include "libft.h"

void	*ft_memmove(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	if (d == s)
		return (dest);
	if (d < s || d >= s + n)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
