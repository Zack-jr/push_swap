/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:32:02 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/05 19:32:22 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate_a(t_node **stack_a)
{
    t_node *last;
    t_node *current;

    if (!stack_a || !*stack_a || !(*stack_a))
        return;
    current = *stack_a;
    while (current->next->next != NULL)
        current = current->next;
    last = current->next;
    current->next = NULL;
    last->next = *stack_a;
    (*stack_a) = last;
    ft_printf("rra\n");
}