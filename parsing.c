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


// "abcde01245" "12331" 12 a 43
// get everything into a string
// use the number as a reference to get the number of nodes we want to create
char *parsing(char **av)
{
    char *str;
    int i;

    i = 0;
    while (av[i] != NULL)
    {
        str = ft_strjoin(str, av[i]);
        str = ft_strjoin(str, "/");
        i++;
    }
   // ft_printf("%s", str);

    return (str);
}