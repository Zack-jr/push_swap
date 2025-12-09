/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:13:47 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/31 02:45:29 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	printstr(char *str);
int	print_char(char c);
int	printdecimal(long long n);
int	printhex(unsigned long n, int base, int uppercase);
int	print_adress(unsigned long n);
int	menu_hex(char specifier, va_list ap);
int	menu(char specifier, va_list ap);

#endif