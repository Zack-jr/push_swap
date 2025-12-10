/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:11:52 by zalabib-          #+#    #+#             */
/*   Updated: 2025/11/02 17:48:27 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "unistd.h"
#include <stdarg.h>

int	menu_hex(char specifier, va_list ap)
{
	int				count;
	unsigned long	adress;
	void			*p;

	count = 0;
	if (specifier == 'x')
		count += printhex(va_arg(ap, unsigned int), 16, 0);
	else if (specifier == 'X')
		count += printhex(va_arg(ap, unsigned int), 16, 1);
	else if (specifier == 'p')
	{
		p = va_arg(ap, void *);
		adress = (unsigned long)p;
		if (p == NULL)
			return (printstr("(nil)"));
		count += print_adress(adress);
	}
	return (count);
}

// menu for hexadecimal printing
// if 'x' pass 0 (lowercase)| if 'X' pass 1 (uppercase)
// then printhex function
// if 'p' create copy of ap in *p then set adress to adress of p
// as an unsigned long for a big enough data type
// check for null and count;