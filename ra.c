/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:31:59 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/05 18:11:57 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    rotate_a(t_list **stack_a)
{
    t_list *old_head;
    t_list *last;

    if (!stack || !*stack || !(*stack))
        return;
    old_head = *stack_a;
    *stack_a = (*stack_a)->next;
    last = *stack_a;
    while (last->next != NULL)
        last = last->next;
    last->next = old_head;

    old_head->next = NULL;
    ft_printf("ra\n");
}