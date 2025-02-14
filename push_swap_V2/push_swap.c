/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:24:14 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/14 16:22:50 by gaducurt         ###   ########.fr       */
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

void	lil_sort(t_clist **lst)
{
	if (is_sorted(lst))
		return ;
	if (lst_size(*lst) == 3)
		sort_three(lst);
	if (lst_size(*lst) == 4)
		sort_four(lst);
	if (lst_size(*lst) == 5)
		sort_five(lst);
}

void	radix(t_clist **lst_a, t_clist **lst_b, int size_a)
{
    int 	mask;
	int		i;

	mask = 1;
	if (lst_size(*lst_a) <= 5)
		lil_sort(lst_a);
	while (!is_sorted(lst_a))
	// while (mask < 100)
	{
		printf("lst_a = \n");
		print_lst(lst_a);
		i = 0;
		while (i <= size_a)
		{
			if (((*lst_a)->index & mask) == mask)
				ra(lst_a);
			if (((*lst_a)->index & mask) != mask)
				pb(lst_a, lst_b);
			i++;
		}
		while (*lst_b)
			pa(lst_b, lst_a);
		mask = mask << 1;
		printf("mask = %d\n", mask);
	}
	// printf("nb operation = %d\n\n", count);
}
