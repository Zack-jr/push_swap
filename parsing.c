/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-09 15:24:37 by zalabib-          #+#    #+#             */
/*   Updated: 2025-12-09 15:24:37 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// a.out "abcde01245" "12331" 12 a 43
// get everything into a string
// use the number as a reference to get the number of nodes we want to create
char **parsing(char **av)
{
    char *str;
    int i;

    str = ft_strdup("");
    i = 1; // skip binary
    while (av[i] != NULL)
    {
        str = ft_strjoin(str, av[i]);
        str = ft_strjoin(str, "/");
        i++;
    }
   // ft_printf("%s", str);

    return (ft_split(str, '/'));
}