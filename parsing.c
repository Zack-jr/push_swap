/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:24:37 by zalabib-          #+#    #+#             */
/*   Updated: 2025/12/10 19:50:17 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// a.out "abcde01245" -12"12331" 12 a 43
// get everything into a string
// use the number as a reference to get the number of nodes we want to create



// return an array of strings containing each valid element
// skip every space in my string
// check for signs, if the character after the sign isnt a digit, error

// 1234
char    **check_str(char *str)
{
    int i;
    int j;
    int start;
    char **array;

    i = 0;
    start = 0;
    j = 0;
    array = NULL;
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            error();
        while (str[i] == ' ')
            i++;
        if (str[i] == '-' || str[i] == '+')
            if (!ft_isdigit((str[i + 1])))
                error();
        while (ft_isdigit(str[i]))
        {
            start = i;
            if (ft_isdigit(str[i + 1]))
                i++;
            else
                array[j] = ft_strdup(&str[i - start]);
            i++;
        }
        j++;
        
    }
    return (array);
}


// j'ai une string avec tous les parametres
// dans cette string je veux verifier si tous les parametres sonts bons, si ils le sont pas, error
// si ils le sont, je dois 

char **parsing(char **av)
{
    char *str;
    int i;

    str = ft_strdup("");
    i = 1; // skip binary
    while (av[i] != NULL)
    {
        str = ft_strjoin(str, av[i]);
        if (!str)
            return (NULL);
        i++;
    }
    return (check_str(str));

    //return (ft_split(str, '/'));
}