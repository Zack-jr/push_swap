/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:28:01 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/13 16:51:37 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node **lst)
{
	int	n;

	if (!lst || !*lst || !(*lst))
		return ;
	n = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = n;
	ft_printf("sa\n");
}
