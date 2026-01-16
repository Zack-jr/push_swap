/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:24:39 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/16 16:38:59 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include "LIB_FT/libft.h"

typedef struct s_node
{
	int				content;
	int				index;
	struct s_node	*next;
}	t_node;

// parsing
void	error(void);
void	ft_swap(int *a, int *b);
char	*join_arguments(char **av);
int		tokens_count(char **tokens);
int		check_tokens(char **tokens);
void	free_tokens(char **tokens);
// (In main.c) // 
bool	check_valid(char *tmp);

// helpers
t_node	*ft_lstnew_int(int n);
void	ft_lstadd_back_bis(t_node **lst, t_node *new);
void	init_stack_a(t_node **stack, char **tokens);
int		stack_size(t_node *stack);
long	ft_atol(const char *nptr);
void	free_stacks(t_node **stack_a, t_node **stack_b);
void	cleanup_error(t_node **stack_a, t_node **stack_b, char **tokens);

// operations
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rra(t_node **stack_a);
void	sa(t_node **lst);
void	sb(t_node **lst);

// algorithm

void	simplify_stack(t_node *stack_a);
void	sort_big_stack(t_node **stack_a, t_node **stack_b);
void	sort_four_and_five(t_node **stack_a, t_node **stack_b);
void	move_min_to_top(t_node **a);
void	sort_three(t_node **stack_a);
// (In main.c) //
bool	is_sorted(t_node *stack_a);
#endif