/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:00:19 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/11 17:15:32 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    init_stack_a(t_node **stack, char **tokens)
{
    int i;
    int n;
    t_node *new;

    i = 0;
    *stack = NULL;
    while (tokens[i])
    {
        n = ft_atol(tokens[i]);
        new = ft_lstnew_int(n);
        ft_lstadd_back_bis(stack, new);
        i++;
    }
    new->next = NULL;
}

long    ft_atol(const char *nptr)
{
    int	i;
	int	sign;
	long	res;

	res = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}





