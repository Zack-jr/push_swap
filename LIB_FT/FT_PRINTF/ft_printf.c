/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:13:38 by zalabib-          #+#    #+#             */
/*   Updated: 2025/11/02 18:24:10 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			count += menu(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

// creating an argument pointer
// for every character in my format string
// if encountering '%', grab next character and current argument
// else write, then "release" argument pointer from memory