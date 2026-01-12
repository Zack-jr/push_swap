/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:34:40 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/12 18:59:09 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIB_FT/libft.h"
#include "push_swap.h"


static void    push_swap(t_node **stack_a, t_node **stack_b, char **tokens)
{
    init_stack_a(stack_a, tokens);
    free_tokens(tokens);
    simplify_stack(*stack_a);
    if (!is_sorted(*stack_a))
    {
        if (stack_size(*stack_a) <= 5)
            sort_small_stack(stack_a, stack_b);
        else
            sort_big_stack(stack_a, stack_b);
    }
    free_stacks(stack_a, stack_b);
}


int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;
    char *temp_str;
    char **tokens;

    if (argc < 2)
        return (0);
    temp_str = join_arguments(argv + 1);
    if (!temp_str)
        cleanup_error(NULL, NULL, NULL); // Si join échoue

    tokens = ft_split(temp_str, ' ');
    free(temp_str); // On libère temp_str immédiatement ici
    
    if (!tokens)
        cleanup_error(NULL, NULL, NULL);

    if (check_tokens(tokens) == 0)
        cleanup_error(NULL, NULL, tokens); // On libère tokens avant de partir

    push_swap(&stack_a, &stack_b, tokens);
    return (0);
}







