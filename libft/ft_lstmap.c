/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:37:04 by ayoub             #+#    #+#             */
/*   Updated: 2024/08/20 22:26:22 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*curr;
	t_list	*new_node;
	t_list	*old_node;

	if (!lst || !f || !del)
		return (NULL);
	curr = lst;
	new_node = NULL;
	while (curr)
	{
		old_node = ft_lstnew(f(curr->content));
		if (!old_node)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&new_node, old_node);
		curr = curr->next;
	}
	return (new_node);
}
