/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 08:52:58 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/17 08:53:00 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int size, char **input)
{
	int i;
	int j;

	i = 1;
	while (i != isze)
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
		if (input[i][0] != input[j][0])
			i++;
		else
		{
			while (input[i] || input[j])
			{
				if (input[i][index] == input[j][index])
					return (0);
				index++;
			}
		}
	}
	return (1);
}

void    fill_stack_a(int size, char **input)
{
    int i;

    i = 1;
    while (i != size)
    {

    }
}

int main(int argc, char **argv)
{
    if (argc = 1)
        return (0);
    if (ft_check(argv) == 1)
	{
        fill_stack(argc, argv);
        push_swap();
	}
}
