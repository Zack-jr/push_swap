/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdecimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:12:24 by zalabib-          #+#    #+#             */
/*   Updated: 2025/11/02 17:59:36 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "unistd.h"
#include <stdarg.h>

int	printdecimal(long long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		count += printdecimal(-n);
		return (count);
	}
	if (n >= 10)
		count += printdecimal(n / 10);
	count += print_char(n % 10 + '0');
	return (count);
}

// same as putnbr
// if n is negative
// recursion with -n to swap back to positive
// printdecimal
// if n >= 10 get number to the left
// write number on the right
