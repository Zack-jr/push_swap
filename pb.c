/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:32:09 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/05 17:53:56 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_b(t_list **stack_a, t_list **stack_b)
{
    if (!stack_a || !stack_b)
        return;
    t_list *tmp;

    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    *tmp->next = *stack_b;
    *stack_b = tmp;

    ft_printf("pb\n");
}