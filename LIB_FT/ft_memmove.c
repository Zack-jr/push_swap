/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:49:25 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/19 19:10:46 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*s;

	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest < src)
	{
		while (n--)
			*p++ = *s++;
		return (dest);
	}
	else if (dest > src)
	{
		while (n--)
			p[n] = s[n];
	}
	return (dest);
}

// we start like memcpy
// when dest is to the right of src, dest[n] = src[n]
