/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:12:33 by zalabib-          #+#    #+#             */
/*   Updated: 2025/11/02 17:59:08 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "ft_printf.h"
#include <stdarg.h>

int	printstr(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (*str != '\0')
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}

// check NULL string adress