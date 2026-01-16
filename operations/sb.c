/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:36 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/16 16:39:12 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_node **lst)
{
	int	n;

	if (!lst || !*lst || !(*lst))
		return ;
	n = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = n;
	ft_printf("sb\n");
}
