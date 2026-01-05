/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:31:59 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/05 19:32:32 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_a(t_node **stack_a)
{
    t_node *old_head;
    t_node *last;

    if (!stack || !*stack || !(*stack))
        return;
    old_head = *stack_a;
    *stack_a = (*stack_a)->next;
    last = *stack_a;
    while (last->next != NULL)
        last = last->next;
    last->next = old_head;

    old_head->next = NULL;
    ft_printf("ra\n");
}