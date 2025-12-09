/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:02:46 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/22 16:28:08 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	isinset(char c, char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;
	char	*str;
	size_t	j;

	j = 0;
	i = 0;
	while (s1[i] != '\0' && isinset(s1[i], (char *)set))
		i++;
	len = ft_strlen(s1);
	while (len > i && isinset(s1[len -1], (char *)set))
		len--;
	str = malloc(sizeof(char) * (len - i + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

// get char nb
// allocate memory
// for each character in set, check if it's in s1
// if not, store it
