/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:24:14 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/13 19:17:13 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	already_sorted(t_clist **lst_a)
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

void	radix(t_clist **lst_a, t_clist **lst_b)
{
    int 	mask;

    mask = 1;
	if (already_sorted(lst_a))
		return ;
	while (!already_sorted(lst_a))
	{
		while (lst_size(*lst_a) > 3)
		{
			// if (bit_cmp((*lst_a)->index, mask))
			if (((*lst_a)->index & mask) == mask)
				ra(lst_a);
			// if (!bit_cmp((*lst_a)->index, mask))
			if (((*lst_a)->index & mask) != mask)
				pb(lst_a, lst_b);
		}
		while (lst_b)
			pa(lst_a, lst_b);
		mask = mask << 1;
	}
}
