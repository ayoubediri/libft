/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:14:50 by ayoub             #+#    #+#             */
/*   Updated: 2024/08/20 18:14:50 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
