/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:27:06 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/13 16:51:30 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_node **stack_a)
{
	t_node	*last;
	t_node	*current;

	if (!stack_a || !*stack_a || !(*stack_a))
		return ;
	current = *stack_a;
	while (current->next->next != NULL)
		current = current->next;
	last = current->next;
	current->next = NULL;
	last->next = *stack_a;
	(*stack_a) = last;
	ft_printf("rra\n");
}
