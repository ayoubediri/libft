/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:14:39 by ayoub             #+#    #+#             */
/*   Updated: 2024/08/20 18:14:40 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	t;

	i = 0;
	t = c;
	p = s;
	while (i < n)
	{
		if (p[i] == t)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}
