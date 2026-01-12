/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:00:19 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/12 17:05:51 by zalabib-         ###   ########.fr       */
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

static void fill_simplify_array(t_node *stack_a, int *arr)
{
    int i;
    t_node *tmp;

    i = 0;
    tmp = stack_a;
    while (tmp)
    {
        arr[i] = tmp->content;
        tmp = tmp->next;
        i++;
    }
}

static void    sort_simplify_array(int *array, int size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (array[j] > array[j + 1])
                ft_swap(&array[j], &array[j + 1]);
            j++;
        }
        i++;
    }
}

void    simplify_stack(t_node *stack_a)
{
    t_node *tmp;
    int size;
    int *arr;
    int i;

    size = stack_size(stack_a);
    arr = malloc(sizeof(int) * size);
    fill_simplify_array(stack_a, arr);
    sort_simplify_array(arr, size);
    tmp = stack_a;
    while (tmp)
    {
        i = 0;
        while (i < size)
        {
           if (tmp->content == arr[i])
           {
                tmp->index = i;
                break;
           }
           i++;
        }
        tmp = tmp->next;
    }
    free(arr);
}


