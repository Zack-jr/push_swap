/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:34:40 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/11 16:56:23 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIB_FT/libft.h"
#include "push_swap.h"

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;

    // 1️⃣ Vérifier qu’il y a des arguments
    if (argc < 2)
        return 0;

    // 2️⃣ Parser et remplir stack_a
    char **tokens = ft_split(join_arguments(argv + 1), ' '); // ou ton join_arguments
    if (!tokens || check_tokens(tokens) == 0)
    {
        free_tokens(tokens);
        error();
    }

    init_stack_a(&stack_a, tokens);
    free_tokens(tokens);

    // 3️⃣ Indexer pour radix
    index_stack(stack_a);

    // 4️⃣ Choisir le bon algorithme
    int size = stack_size(stack_a);
    if (size <= 1)
        return 0;
    else if (size <= 5)
        small_sort(&stack_a);
    else
        radix_sort(&stack_a, &stack_b);

    // 5️⃣ Libérer stack_a
    while (stack_a)
    {
        t_node *tmp = stack_a;
        stack_a = stack_a->next;
        free(tmp);
    }

    return 0;
}


