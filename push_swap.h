/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:24:39 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/06 20:19:08 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "LIB_FT/libft.h"

typedef struct s_node
{
    int content;
    int index;
    struct s_node *next;
}t_node;

void    error(void);
void	ft_swap(int *a, int *b);
char *join_arguments(char **av);
int tokens_count(char **tokens);
int check_tokens(char **tokens);
void    free_tokens(char **tokens);
t_node	*ft_lstnew_int(int n);
void	ft_lstadd_back_bis(t_node **lst, t_node *new);
void    init_stack_a(t_node **stack, char **tokens);