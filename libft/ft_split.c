/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:11:48 by ayoub             #+#    #+#             */
/*   Updated: 2024/08/20 18:11:50 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *str, char c)
{
	int	w;
	int	i;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			w++;
		while (str[i] != c && str[i])
			i++;
	}
	return (w);
}

static char	*ft_cut(char const *str, char c)
{
	int		len;
	char	*s;
	int		i;

	len = 0;
	i = 0;
	while (str[len] != c && str[len])
		len++;
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

static char	**ft_free(char **array, int size)
{
	while (size)
		free(array[--size]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	array = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!array || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			array[j++] = ft_cut(s + i, c);
			if (!array[j - 1])
				return (ft_free(array, j));
		}
		while (s[i] != c && s[i])
			i++;
	}
	array[j] = NULL;
	return (array);
}
