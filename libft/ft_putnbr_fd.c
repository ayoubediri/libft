/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:12:41 by ayoub             #+#    #+#             */
/*   Updated: 2024/08/20 18:12:42 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	number[10];
	int		i;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
		write(fd, "0", 1);
	while (nb)
	{
		number[i++] = nb % 10 + '0';
		nb /= 10;
	}
	while (i)
		write(fd, &number[--i], 1);
}
