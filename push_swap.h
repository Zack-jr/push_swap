/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-09 15:24:39 by zalabib-          #+#    #+#             */
/*   Updated: 2025-12-09 15:24:39 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "LIB_FT/libft.h"

typedef struct s_node
{
    int content;
    struct s_node *next;
}t_node;

void    error(void);
char    *parsing(char **av);