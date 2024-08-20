/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:15:46 by ayoub             #+#    #+#             */
/*   Updated: 2024/08/20 22:45:30 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	t;

	d = dest;
	s = src;
	t = c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i++] == t)
			return ((void *)(d + i));
	}
	return (0);
}
