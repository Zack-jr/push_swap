/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:05:00 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/16 17:08:02 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	if (is_sorted(*stack_a))
		return ;
	first = (*stack_a)->index;
	second = (*stack_a)->next->index;
	third = (*stack_a)->next->next->index;
	if (first > second && second < third && first < third)
		sa(stack_a);
	else if (first > second && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first > second && second < third && first > third)
		ra(stack_a);
	else if (first < second && second > third && first < third)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first < second && second > third && first > third)
		rra(stack_a);
}

void	sort_four_and_five(t_node **a, t_node **b)
{
	while (stack_size(*a) > 3)
	{
		move_min_to_top(a);
		pb(a, b);
	}
	if (stack_size(*a) == 2 && (*b)->index < (*b)->next->index)
		sb(b);
	sort_three(a);
	while (*b)
		pa(a, b);
}

void	move_min_to_top(t_node **a)
{
	t_node	*tmp;
	int		min;
	int		pos;
	int		size;

	tmp = *a;
	min = INT_MAX;
	pos = 0;
	size = 0;
	while (tmp)
	{
		if (tmp->index < min)
		{
			min = tmp->index;
			pos = size;
		}
		tmp = tmp->next;
		size++;
	}
	if (pos <= size / 2)
		while (pos--)
			ra(a);
	else
		while (pos++ < size)
			rra(a);
}

void	sort_big_stack(t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	size = stack_size(*stack_a);
	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
