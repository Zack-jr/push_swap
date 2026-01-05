/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:32:12 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/05 17:57:10 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_a(t_list **stack_a, t_list stack_b)
{
    if (!stack_a || !stack_b)
        return;
    t_list *tmp;

    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    *tmp->next = *stack_a;
    *stack_a = tmp;

    ft_printf("pa\n");
}