/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:40:31 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/19 19:03:21 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	size_t	needle_len;
	int		j;

	needle_len = ft_strlen(needle);
	i = 0;
	if (*needle == '\0')
		return ((char *)(haystack));
	while (haystack[i] != '\0' && i + needle_len <= n)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// goal = find substring in string
// make sure we check n characters and do not check when it is unecessary
// inner loop to compare the needle and the haystack when first char matches
// if end of needle, return haystack at i index.
