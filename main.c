/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:34:40 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/07 19:14:45 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIB_FT/libft.h"
#include "push_swap.h"

int main(int ac, char **av)
{
    
    char *joined;
    char **tokens;
    t_node *stack_a;
    t_node *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    if (ac < 2)
        error();
    joined = join_arguments(av + 1);
    if (!joined)
        error();
    tokens = ft_split(joined, ' ');
    free(joined);
    if (!check_tokens(tokens) || !tokens || tokens_count(tokens) == 0)
        error();
    init_stack_a(&stack_a, tokens);
    index_stack(stack_a);
    radix_sort(&stack_a, &stack_b);
    free_tokens(tokens);
}