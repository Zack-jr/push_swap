/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:58:00 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/19 18:53:45 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*s;

	if (!dest && !src && n > 0)
		return (NULL);
	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*p++ = *s++;
	return (dest);
}
// set p and s pointers to dest and source
// -> copy and return dest;