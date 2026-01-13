/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:05:00 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/13 16:36:14 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_sorted(t_node *stack_a)
{
	t_node	*tmp;

	tmp = stack_a;
	while (tmp->next != NULL)
	{
		if (tmp->content > tmp->next->content)
			return (false);
		else
			tmp = tmp->next;
	}
	return (true);
}

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

void	sort_small_stack(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size <= 1 || is_sorted(*stack_a))
		return ;
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else
	{
		while (stack_size(*stack_a) > 3)
			pb(stack_a, stack_b);
		sort_three(stack_a);
		while (*stack_b)
			pa(stack_a, stack_b);
	}
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
