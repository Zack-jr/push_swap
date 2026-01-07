/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:00:19 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/07 19:01:31 by zalabib-         ###   ########.fr       */
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
        n = atol(tokens[i]);
        new = ft_lstnew_int(n);
        ft_lstadd_back_bis(stack, new);
        i++;
    }
    new->next = NULL;
}
void    sort_array(int *arr, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (arr[j] > arr[j + 1])
                ft_swap(&arr[j], &arr[j + 1]);
            j++;
        }  
        i++;
    }
}

void    store_to_array(t_node *stack, int *arr)
{
    int i;
    t_node *tmp;

    tmp = stack;
    i = 0;
    while (tmp)
    {
        arr[i] = tmp->content;
        tmp = tmp->next;
        i++;
    }
}

void    index_stack(t_node *stack)
{
    int size;
    int *arr;
    int i;
    t_node *tmp;

    size = stack_size(stack);
    arr = malloc(sizeof(int) * size);
    store_to_array(stack, arr);
    sort_array(arr, size);
    tmp = stack;
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




