/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:11:39 by zalabib-          #+#    #+#             */
/*   Updated: 2025/11/02 17:51:46 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "unistd.h"
#include <stdarg.h>

int	menu(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += printstr(va_arg(ap, char *));
	else if (specifier == '%')
		count += print_char('%');
	else if (specifier == 'd' || specifier == 'i')
		count += printdecimal(va_arg(ap, int));
	else if (specifier == 'u')
		count += printdecimal(va_arg(ap, unsigned int));
	else if (specifier == 'x' || specifier == 'X' || specifier == 'p')
		count += menu_hex(specifier, ap);
	else
		count += write(1, &specifier, 1);
	return (count);
}

// menu for specifiers
// always keep count of chars written
// if 'c' or '%' use printchar function
// if '%s' printstr
// if digit or integer or u integer, use printdecimal
// if hex printing, use menu_hex to save lines