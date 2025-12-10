/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:38:50 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/19 19:11:17 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

/*
void    *set_to0(void *content)
{
	*(int *)content = 0;
	return (content);
}*/

/*
void    deletecontent(void *content)
{
	free(content);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew(lst->content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
