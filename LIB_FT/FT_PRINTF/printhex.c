/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:12:02 by zalabib-          #+#    #+#             */
/*   Updated: 2025/11/02 17:58:48 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "unistd.h"
#include <stdarg.h>

int	printhex(unsigned long n, int base, int uppercase)
{
	int		count;
	char	*hex;

	count = 0;
	if (!uppercase)
		hex = "0123456789abcdef";
	if (uppercase)
		hex = "0123456789ABCDEF";
	if (n < (unsigned long)base)
		return (print_char(hex[n]));
	else
	{
		count += printhex(n / base, base, uppercase);
		count += printhex(n % base, base, uppercase);
		return (count);
	}
}

// if uppercase = true, set reference to uppercase
// else set it to lowercase
// if n is lower than base, print char[n] of hex base
// else recursion like in printdecimal