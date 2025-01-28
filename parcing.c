/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:08:25 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/27 13:08:27 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int size, char **input)
{
	int i;
	int j;

	i = 1;
	while (i != size)
	{
		j = 0;
		while (input[i][j])
		{
			if (input[i][j] < 48 || input[i][j] > 57)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_isdup(int size, char **input)
{
	int	i;
	int	j;
	int	index;

	i = 1;
	index = 0;
	while (i != size)
	{
		j = i + 1;
		while (j != size)
		{
			while (input[i][index] || input[j][index])
			{
				if (input[i][index] == '\0')
					return (0);
				index++;
			}
			j++;
		}
	}
	return (1);
}

int	is_to_long(int size, char **input)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (input[i][0] == '-' && ft_strlen(input[i]) >= 11)
			return (0);
		if (ft_strlen(input[i]) >= 10)
			return (0);
	}
	return (1);
}

int	ft_check(int size, char **arg)
{
		if (!(ft_isdigit(size, arg)))
			return (0);
		if (!(ft_isdup(size, arg)))
			return (0);
		if (!(is_to_long(size, arg)))
			return (0);
		return (1);
}
