/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:12:28 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/19 18:52:19 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if ((unsigned char)c == *p)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

// set pointer to string adress
// iterate with p pointer until we find the char
//  then return adress where char is found
