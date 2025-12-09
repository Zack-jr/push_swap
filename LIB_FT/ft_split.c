/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 23:59:28 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/22 16:25:39 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	free_res(char	**res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static size_t	countwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*next_word(char const *s, char c, size_t *len)
{
	char	*str;

	*len = 0;
	while (*s == c)
		s++;
	while (*s != c && *s != '\0')
	{
		(*len)++;
		s++;
	}
	str = (char *)s - *len;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**res;
	size_t	len;
	char	*pos;

	words = countwords(s, c);
	i = 0;
	res = malloc(sizeof(char *) * (words + 1));
	if (!res || !s)
		return (NULL);
	while (i < words)
	{
		pos = next_word(s, c, &len);
		res[i] = ft_calloc(sizeof(char) * (len + 1), 1);
		if (!res[i])
			return (free_res(res), NULL);
		ft_memmove(res[i], pos, len);
		res[i][len] = '\0';
		s = pos + len;
		i++;
	}
	res[i] = NULL;
	return (res);
}

// goal: create array of strings from string when I encounter
// get the numbers of words
// allocate memory for number of words + 1
// get the position of each word + length of each word
// allocate dynamically for the lengh of each word into res[i]
//copy into the string at the right position into res[i]
// null terminate, and keep looking for words at s = pos + len
// NULL terminate for the end of the arrays of strings
