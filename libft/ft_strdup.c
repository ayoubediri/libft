#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;
	int		i;

	len = ft_strlen(s);
	str = malloc(len);
	i = 0;
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
