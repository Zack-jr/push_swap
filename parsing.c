/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:24:37 by zalabib-          #+#    #+#             */
/*   Updated: 2025/12/15 20:09:10 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// a.out "abcde01245" "12331" 12 a 43
// get everything into a string
// use the number as a reference to get the number of nodes we want to create

char *join_arguments(char **av)
{
    int i;
    char *str

    i = 0;
    while (av[i])
    {
        str = ft_strjoin(str, av[i]);
        str = ft_strjoin(str, " ");
        i++;
    }
    return (str);
}

int tokens_count(char **str)
{
    int i;

    i = 0;
    while (av[i] != NULL)
        i++;
    return (i);
}

int check_tokens(char **tokens)
{
    int i;

    i = 0
    while (tokens[i] != NULL)
    {
        if (token[i])
        i++;
    }
}