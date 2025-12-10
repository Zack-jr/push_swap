/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printadress.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:12:12 by zalabib-          #+#    #+#             */
/*   Updated: 2025/11/02 17:52:20 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "ft_printf.h"
#include <stdarg.h>

int	print_adress(unsigned long n)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += printhex(n, 16, 0);
	return (count);
}

// write 0x
// use printhex