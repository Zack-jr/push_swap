/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:36:25 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/19 19:10:42 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*
void	delete(void *content)
{
	free(content);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next_node;

	current = *lst;
	if (lst && del)
	{
		while (current != NULL)
		{
			next_node = current->next;
			del(current->content);
			free(current);
			current = next_node;
		}
	}
	*lst = NULL;
}
