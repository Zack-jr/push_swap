/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:29:26 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/13 17:57:44 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}
/*
int main(void)
{
    char str[]= "abc";
    ft_bzero(str, 3);
    printf("%s", str);
}*/
