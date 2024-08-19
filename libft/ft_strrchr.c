#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	if (c == 0)
		return (str + len);
	while (len--)
	{
		if (str[len] == c)
			return (str + len);
	}
	return (0);
}
