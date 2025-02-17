/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:24:14 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/17 18:14:48 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_clist **lst_a)
{
	t_clist	*tmp1;
	t_clist	*tmp2;

	tmp1 = *lst_a;
	tmp2 = (*lst_a)->next;
	while (tmp2)
	{
		if (tmp1->index > tmp2->index)
			return (0);
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	return (1);
}

void	lil_sort(t_clist **lst_a, t_clist **lst_b)
{
	if (is_sorted(lst_a))
		return ;
	if (lst_size(*lst_a) == 2)
		sa(lst_a);
	if (lst_size(*lst_a) == 3)
		sort_three(lst_a);
	if (lst_size(*lst_a) == 4)
		sort_four(lst_a, lst_b);
	if (lst_size(*lst_a) == 5)
		sort_five(lst_a, lst_b);
}

static int	count_bit(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n >> 1;
		count++;
	}
	return (count);
}

void	radix(t_clist **lst_a, t_clist **lst_b, int size_a)
{
	int		i;
	int		bit;
	int		bit_max;

	bit = 0;
	bit_max = count_bit(size_a);
	if (size_a <= 5)
		lil_sort(lst_a, lst_b);
	else
	{
		while (bit < bit_max)
		{
			i = 1;
			while (i++ <= size_a)
			{
				if (((*lst_a)->index >> bit & 1) == 1)
					ra(lst_a);
				else
					pb(lst_a, lst_b);
			}
			while (*lst_b)
				pa(lst_b, lst_a);
			bit++;
		}
	}
}
