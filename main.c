/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:34:40 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/11 18:44:43 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIB_FT/libft.h"
#include "push_swap.h"

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;

    // 1 - PARSING INPUT
    if (argc < 2)
        return 0;
    char **tokens;

    tokens = ft_split(join_arguments(argv + 1), ' ');
    if (!tokens)
        error();
    if (check_tokens(tokens) == 0)
    {
        free_tokens(tokens);
        error();
    }
    // 2 - STORING INPUT
    init_stack_a(&stack_a, tokens);
    free_tokens(tokens);
    if (!stack_a)
        return 0;
    // 3-  NEED GOOD ALGORITHM

    // 4 - FREE LINKED LIST
}





