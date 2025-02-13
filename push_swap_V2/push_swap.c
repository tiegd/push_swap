/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:24:14 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/13 13:45:02 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	already_sorted(t_clist **lst_a)
{
	t_clist	*tmp;

	tmp = *lst_a;
	while (tmp)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	radix(t_clist **lst_a, t_clist **lst_b)
{
    int mask;
	t_clist	*last;

    mask = 1;
	if (already_sorted(lst_a))
		return ;
	while (!already_sorted(lst_a))
	{
		last = lst_last(*lst_a);
		while ((*lst_a)->index != last->index)
		{
			// if (bit_cmp((*lst_a)->index, mask))
			if (((*lst_a)->index & mask) == mask)
				ra(lst_a);
			// if (!bit_cmp((*lst_a)->index, mask))
			if (((*lst_a)->index & mask) != mask)
				pb(lst_a, lst_b);
		}
		while (lst_b)
			pb(lst_a, lst_b);
		mask = mask << 1;
	}
}
