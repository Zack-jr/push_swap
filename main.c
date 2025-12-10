/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:34:40 by zalabib-          #+#    #+#             */
/*   Updated: 2025/12/10 20:06:18 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIB_FT/libft.h"
#include "push_swap.h"

// handle the input, that can be strings containing multiple AV's or just AVS
// put every argument into a string, a
// create n numbers of nodes for my a stack and for my b stack
// atoi on every element, then store it in each node's content
// 


// "a.out a b c d"

int main(int ac, char **av)
{
    if (ac == 1)
       return(ft_printf("error"), 1);
    char **args = parsing((av));
    int i = 0;

    //ft_printf("%s", args);
    
    while (i < ac)
    {
        ft_printf("%s", args[i]);
        i++;
    }

    //int n = ft_atoi(av[1]);
    //ft_printf("%i", n);
}//