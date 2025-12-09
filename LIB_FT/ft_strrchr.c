/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:04:01 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/19 19:04:00 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		found;

	found = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			found = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	if (found == -1)
		return (NULL);
	str = (char *)&s[found];
	return (str);
}

// goal: return the adress of the string
//starting from the last c character encountered
// loop through the string.
// if character found, mark it and keep going
// if char is found another time, update the mark with new position
