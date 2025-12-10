/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:31:32 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/19 18:54:55 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n--)
		*a++ = (unsigned char)c;
	return (s);
}

// set a pointer to adress of s
// use a to loop through  the string and replace the chars
