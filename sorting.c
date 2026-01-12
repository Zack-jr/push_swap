/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:05:00 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/12 18:45:39 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool is_sorted(t_node *stack_a)
{
    t_node *tmp;

    tmp = stack_a;
    while (tmp->next != NULL)
    {
        if (tmp->content > tmp->next->content)
            return (false);
        else
            tmp = tmp->next;
    }
    return (true);
}

void	move_min_to_top(t_node **stack_a)
{
	t_node	*tmp;
	int		min_index;
	int		pos;
	int		size;

	tmp = *stack_a;
	min_index = tmp->index;
	size = stack_size(*stack_a);
	// 1. Trouver l'index minimum actuel dans la pile
	while (tmp)
	{
		if (tmp->index < min_index)
			min_index = tmp->index;
		tmp = tmp->next;
	}
	// 2. Trouver sa position
	pos = 0;
	tmp = *stack_a;
	while (tmp->index != min_index && ++pos)
		tmp = tmp->next;
	// 3. Choisir le chemin le plus court (ra ou rra)
	if (pos <= size / 2)
		while ((*stack_a)->index != min_index)
			ra(stack_a);
	else
		while ((*stack_a)->index != min_index)
			rra(stack_a);
}

void	sort_three(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	if (is_sorted(*stack_a))
		return;
	first = (*stack_a)->index;
	second = (*stack_a)->next->index;
	third = (*stack_a)->next->next->index;

	if (first > second && second < third && first < third)
		sa(stack_a);
	else if (first > second && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first > second && second < third && first > third)
		ra(stack_a);
	else if (first < second && second > third && first < third)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first < second && second > third && first > third)
		rra(stack_a);
}

void	sort_small_stack(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size <= 1 || is_sorted(*stack_a))
		return ;
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else
	{
		// Pousse les index 0 (et 1 si taille 5) dans stack_b
		while (stack_size(*stack_a) > 3)
		{
			// Optimisation : amener le min au sommet avant pb
			move_min_to_top(stack_a);
			pb(stack_a, stack_b);
		}
		sort_three(stack_a);
		while (*stack_b)
			pa(stack_a, stack_b);
	}
}


void    sort_big_stack(t_node **stack_a, t_node **stack_b)
{
    int     i;
    int     j;
    int     size;
    int     max_bits;

    size = stack_size(*stack_a);
    max_bits = 0;
    // 1. Trouver combien de bits sont nécessaires pour représenter l'index max
    // On se base sur (size - 1) car c'est l'index le plus élevé
    while (((size - 1) >> max_bits) != 0)
        max_bits++;

    i = 0;
    // 2. Boucle principale sur chaque bit (du moins significatif au plus significatif)
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            // On regarde le i-ème bit de la valeur en haut de stack_a
            // Si le bit est 1, on le laisse dans stack_a (rotation)
            // Si le bit est 0, on l'envoie dans stack_b
            if ((((*stack_a)->index >> i) & 1) == 1)
                ra(stack_a); // Rotation : on le garde pour le moment
            else
                pb(stack_a, stack_b); // Push vers B : on l'isole
            j++;
        }
        // 3. On vide stack_b vers stack_a pour reconstruire la pile selon le bit traité
        while (*stack_b)
            pa(stack_a, stack_b);
        i++;
    }
}
