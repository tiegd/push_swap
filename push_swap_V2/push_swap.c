/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:24:14 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/14 16:04:35 by gaducurt         ###   ########.fr       */
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
	int		count;
	int		i;
	// int		size_b;

	mask = 1;
	count = 0;
	if (lst_size(*lst_a) <= 5)
		lil_sort(lst_a);
	// init_lst_b(lst_b);
	while (!is_sorted(lst_a))
	// while (mask < 100)
	{
		printf("lst_a = \n");
		print_lst(lst_a);
		i = 0;
		// while (*lst_a != last)
		while (i < size_a)
		{
			if (((*lst_a)->index & mask) == mask)
				ra(lst_a);
			if (((*lst_a)->index & mask) != mask)
				pb(lst_a, lst_b);
			// print_lst(lst_a);
			// print_lst(lst_b);
			i++;
			count++;
		}
		// size_b = lst_size(*lst_b);
		// printf("size_b = %d\n", size_b);
		// printf("lst_a = \n");
		// print_lst(lst_a);
		// printf("lst_b = \n");
		// print_lst(lst_b);
		// i = 0;
		while (*lst_b)
		// while (i < size_b)
		{
			pa(lst_b, lst_a);
			i++;
			count++;
		}
		mask = mask << 1;
		printf("mask = %d\n", mask);
	}
	// printf("nb operation = %d\n\n", count);
}
