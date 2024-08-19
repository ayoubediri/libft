#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = 0;
	if (ft_strlen(s) <= start)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[start + i] = s[i];
		i++;
	}
	substr[start + i] = '\0';
	return (substr);
}
