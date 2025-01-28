/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:23:09 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/28 14:23:11 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	fill_stack_a(int size, char **input)
{
    int			i;
	int			number;
	t_dclist	**lst_a;
	t_dclist	*new;

    i = 1;
    while (i <= size)
	{
		number = ft_atoi(input[i]);
		new = new_node(number);
		add_node_back(lst_a, new);
		i++;
	}
}

int	check_bit(int a, int b)
{
	
}
