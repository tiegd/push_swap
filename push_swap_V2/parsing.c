/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:48:02 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/11 15:50:38 by gaducurt         ###   ########.fr       */
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
				return(0);
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
	
	i = 1;
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

	i = 1;
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

int	check_args(t_clist **lst_a, char **input, int size)
{
	char	**new_tab;
	int		i;
	
	i = 0;
	if (size == 2)
	{
		new_tab = ft_split(input[1], ' ');
		while (new_tab[i])
			i++;
		size = i;
		if (ft_parser(size, new_tab))
		{
			fill_lst(lst_a, new_tab, size, 0);
			free_all(new_tab);
			return (1);
		}
	}
	else if (ft_parser(size, input))
	{
		fill_lst(lst_a, input, size, 1);
		return (1);
	}
	return (0);
}
