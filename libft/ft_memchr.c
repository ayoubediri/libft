/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:14:39 by ayoub             #+#    #+#             */
/*   Updated: 2024/08/20 22:58:37 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	t;

	i = 0;
	t = c;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == t)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}
