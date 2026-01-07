/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:05:00 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/07 19:14:35 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max_bits(t_node *stack)
{
    int max_index;
    int max_bits;
    t_node *tmp;

    max_bits = 0;
    max_index = 0;
    tmp = stack;
    while (tmp)
    {
        if (tmp->index > max_index)
            max_index = tmp->index;
        tmp = tmp->next;
    }
    while (max_index >> max_bits)
        max_bits++;

    return (max_bits);
}

void radix_sort(t_node **stack_a, t_node **stack_b)
{
    int i;
    int j;
    int size;
    int max_bits;

    max_bits = get_max_bits(*stack_a);

    i = 0;
    while (i < max_bits)
    {
        size = stack_size(*stack_a);
        j = 0;
        while (j < size)
        {
            if ((((*stack_a)->index >> i) & 1) == 0)
                pb(stack_a, stack_b);
            else
                ra(stack_a);
            j++;
        }
        while (*stack_b)
            pa(stack_a, stack_b);
        i++;
    }
}