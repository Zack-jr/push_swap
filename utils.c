/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:44:13 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/13 16:44:00 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

static void	free_stack(t_node **stack)
{
	t_node	*tmp;
	t_node	*current;

	if (!stack || !*stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_stacks(t_node **stack_a, t_node **stack_b)
{
	if (stack_a)
		free_stack(stack_a);
	if (stack_b)
		free_stack(stack_b);
	exit(1);
}

void	cleanup_error(t_node **stack_a, t_node **stack_b, char **tokens)
{
	if (tokens)
		free_tokens(tokens);
	if (stack_a || stack_b)
		free_stacks(stack_a, stack_b);
	write(2, "Error\n", 6);
	exit(1);
}
