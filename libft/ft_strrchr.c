/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:10:59 by ayoub             #+#    #+#             */
/*   Updated: 2024/08/20 18:11:01 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	if (c == 0)
		return (str + len);
	while (len--)
	{
		if (str[len] == c)
			return (str + len);
	}
	return (0);
}
