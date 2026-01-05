/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:34:40 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/05 19:37:57 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIB_FT/libft.h"
#include "push_swap.h"


static void    init_stack_a(t_node **stack, char **tokens)
{
    int i;
    int n;
    t_node *new;

    i = 0;
    *stack = NULL;
    while (tokens[i])
    {
        n = atol(tokens[i]);
        new = ft_lstnew_int(n);
        ft_lstadd_back_bis(stack, new);
        i++;
    }
}
int main(int ac, char **av)
{
    char *joined;
    char **tokens;
    t_node *stack_a;
  // t_node *stack_b;
    stack_a = NULL;

    if (ac < 2)
        error();
    joined = join_arguments(av + 1);
    if (!joined)
        error();
    tokens = ft_split(joined, ' ');
    free(joined);
    if (!tokens || tokens_count(tokens) == 0)
        error();
    if (!check_tokens(tokens))
        error();

    init_stack_a(&stack_a, tokens);
    t_node *tmp = stack_a;
    while (tmp)
    {
        printf("%d\n", tmp->content);
        tmp = tmp->next;
    }
    free_tokens(tokens);
}