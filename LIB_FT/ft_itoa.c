/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:07:23 by zalabib-          #+#    #+#             */
/*   Updated: 2025/10/22 16:26:25 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t	getcharnb(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	fill(char *str, long n, int *i)
{
	if (n >= 10)
		fill(str, n / 10, i);
	str[(*i)++] = '0' + (n % 10);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	int		i;
	long	nb;

	i = 0;
	nb = n;
	size = getcharnb(nb);
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[i] = '-';
		nb = -nb;
		i++;
	}
	fill(str, nb, &i);
	str[i] = '\0';
	return (str);
}

// get number of characters
// allocating for size + 1
// putting str[0] to '-' if nb is negative
// recursively fill the array by taking the string, the number and
// the adress of the index
