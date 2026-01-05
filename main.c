/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:34:40 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/05 17:07:03 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIB_FT/libft.h"
#include "push_swap.h"

// handle the input, that can be strings containing multiple AV's or just AVS
// put every argument into a string with a separating character, then split in multiple arguments
// create n numbers of nodes for my a stack and for my b stack
// atoi on every element, then store it in each node's content
// 


// "a.out a b c d"

int main(int ac, char **av)
{
    char *joined;
    char **tokens;

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
    if (check_tokens(tokens))
        ft_printf("valid args\n");
    int i = 0;
    int n;
    while (tokens[i] != NULL)
    {
        n = atol(tokens[i]);
        printf("%i\n", n);
        i++;
    }
    free_tokens(tokens);
}