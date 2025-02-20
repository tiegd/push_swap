/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:48:02 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/20 14:14:20 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdup(int size, char **input)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strncmp(input[i], input[j], (size_t) 13) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_number(int size, char **input)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		if (input[i][0] == '-' && ft_strlen(input[i]) > 1)
			j++;
		while (input[i][j])
		{
			if (!ft_isdigit(input[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_to_long(int size, char **input)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_strlen(input[i]) > 11)
			return (0);
		i++;
	}
	return (1);
}

int	ft_parser(int size, char **input)
{
	if (!is_to_long(size, input))
		return (0);
	if (!ft_isdup(size, input))
		return (0);
	if (!check_number(size, input))
		return (0);
	return (1);
}

int	tab_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
