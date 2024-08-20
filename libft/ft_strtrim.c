#include "libft.h"

static int	ft_chek(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_chek(s1[start], set) && s1[start])
		start++;
	while (end > start && ft_chek(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
