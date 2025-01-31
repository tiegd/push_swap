/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:48:02 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/31 17:13:49 by gaducurt         ###   ########.fr       */
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
		while (j <= size)
		{
			if (!ft_strncmp(input[i], input[j], 13))
				return(0);
			j++;
		}
		i++;
	}
	return (1);
}

// int	ft_parser(int size, char **input)
// {
	
// }
