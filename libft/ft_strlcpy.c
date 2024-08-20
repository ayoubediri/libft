#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (dsize == 0)
		return (j);
	while (src[i] && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (j);
}
