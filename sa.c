/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:21:22 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/05 19:47:38 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_a(t_node **lst)
{
    int n;

    if (!lst || !*lst || !**lst)
        return;
    n = (*lst)->content;
    (*lst)->content = (*lst)->next->content;
    (*lst)->next->content = n;
    ft_printf("sa\n");
}