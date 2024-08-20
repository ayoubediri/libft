/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:08:24 by ayoub             #+#    #+#             */
/*   Updated: 2024/08/20 18:08:30 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[j + i] == to_find[j] && str[i + j] && j + i < n)
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
