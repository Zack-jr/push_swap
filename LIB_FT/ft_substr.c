/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:29:23 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/19 19:09:49 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	count;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)ft_strlen(s) <= start)
		return (ft_strdup(""));
	count = ft_strlen(s + start);
	if (count > len)
		count = len;
	str = malloc((sizeof(char) * count + 1));
	if (!str)
		return (NULL);
	while (i < count)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// substring starts at index start
// allocate memory in str for len + '\0'
// take what's in between start included and len included
