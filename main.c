/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:34:40 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/16 17:07:35 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIB_FT/libft.h"
#include "push_swap.h"

bool	check_valid(char *tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == '-' && i != 0)
			return (false);
		i++;
	}
	return (true);
}

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

static void	push_swap(t_node **stack_a, t_node **stack_b, char **tokens)
{
	int	elements;

	init_stack_a(stack_a, tokens);
	free_tokens(tokens);
	simplify_stack(*stack_a);
	elements = stack_size(*stack_a);
	if (!is_sorted(*stack_a))
	{
		if (elements == 2)
			sa(stack_a);
		else if (elements == 3)
			sort_three(stack_a);
		else if (elements <= 5)
			sort_four_and_five(stack_a, stack_b);
		else
			sort_big_stack(stack_a, stack_b);
	}
	free_stacks(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	*temp_str;
	char	**tokens;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (argv[1][0] == '\0')
		error();
	temp_str = join_arguments(argv + 1);
	if (!temp_str)
		cleanup_error(NULL, NULL, NULL);
	tokens = ft_split(temp_str, ' ');
	free(temp_str);
	if (!tokens ||!tokens[0])
		cleanup_error(NULL, NULL, tokens);
	if (check_tokens(tokens) == 0)
		cleanup_error(NULL, NULL, tokens);
	push_swap(&stack_a, &stack_b, tokens);
	return (0);
}
