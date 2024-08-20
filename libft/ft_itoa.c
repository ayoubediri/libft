#include "libft.h"

static int	ft_int_to_digits(char *number, long nb)
{
	int	j;

	j = 0;
	while (nb)
	{
		number[j++] = nb % 10 + '0';
		nb /= 10;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*s;
	char	number[12];
	long	nb;
	int		i;
	int		j;

	i = 0;
	nb = n;
	s = malloc(12);
	if (!s)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		s[i++] = '-';
	}
	if (nb == 0)
		s[i++] = '0';
	j = ft_int_to_digits(number, nb);
	while (j)
		s[i++] = number[--j];
	s[i] = '\0';
	return (s);
}
