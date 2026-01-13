/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalabib- <zalabib-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:24:37 by zalabib-          #+#    #+#             */
/*   Updated: 2026/01/13 16:50:41 by zalabib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*join_arguments(char **argv)
{
	char	*res;
	char	*tmp;
	int		i;

	i = 0;
	res = ft_strdup("");
	if (!res)
		return (NULL);
	while (argv[i])
	{
		tmp = res;
		res = ft_strjoin(tmp, argv[i]);
		free(tmp);
		if (!res)
			return (NULL);
		tmp = res;
		res = ft_strjoin(tmp, " ");
		free(tmp);
		if (!res)
			return (NULL);
		i++;
	}
	return (res);
}

int	tokens_count(char **tokens)
{
	int	i;

	i = 0;
	while (tokens[i] != NULL)
		i++;
	return (i);
}

static int	is_valid_format(char *token)
{
	int	i;

	i = 0;
	if (!token)
		return (0);
	while (token[i])
	{
		if (token[i] == '+' || token[i] == '-' || token[i] == ' ')
			i++;
		if (token[i] == '\0')
			return (0);
		if (!ft_isdigit(token[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	check_duplicates(char **tokens)
{
	int	i;
	int	j;
	int	n1;
	int	n2;

	i = 0;
	while (tokens[i])
	{
		j = i + 1;
		while (tokens[j])
		{
			n1 = ft_atol(tokens[i]);
			n2 = ft_atol(tokens[j]);
			if (n1 == n2)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_tokens(char **tokens)
{
	int		i;
	long	n;

	i = 0;
	while (tokens[i] != NULL)
	{
		n = ft_atol(tokens[i]);
		if (!is_valid_format(tokens[i]))
			return (0);
		if (n > INT_MAX || n < INT_MIN)
			return (0);
		if (!check_duplicates(tokens))
			return (0);
		i++;
	}
	return (1);
}
