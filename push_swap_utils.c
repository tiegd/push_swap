/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:23:44 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/19 18:06:22 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_size(t_clist *lst)
{
	int	size;

	size = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

void	sort_three(t_clist **lst)
{
	t_clist	*tmp;

	while (!is_sorted(lst))
	{
		tmp = (*lst)->next;
		if (tmp->index == 2)
			sa(lst);
		else if ((*lst)->index == 2)
			ra(lst);
		else if ((*lst)->index > tmp->index)
			sa(lst);
	}
}

void	sort_four(t_clist **lst_a, t_clist **lst_b)
{
	t_clist	*tmp;

	while (lst_size(*lst_a) > 2)
	{
		if ((*lst_a)->index < 2)
			pb(lst_a, lst_b);
		else if ((*lst_a)->index > 1)
			ra(lst_a);
	}
	tmp = *lst_a;
	while (tmp)
	{
		tmp->index = tmp->index - 2;
		tmp = tmp->next;
	}
	if ((*lst_b)->index < (*lst_b)->next->index)
		sb(lst_b);
	if ((*lst_a)->index > (*lst_a)->next->index)
		sa(lst_a);
	pa(lst_b, lst_a);
	pa(lst_b, lst_a);
}

void	sort_five(t_clist **lst_a, t_clist **lst_b)
{
	t_clist	*tmp;

	while (lst_size(*lst_a) > 3)
	{
		if ((*lst_a)->index < 2)
			pb(lst_a, lst_b);
		else if ((*lst_a)->index > 1)
			ra(lst_a);
	}
	tmp = *lst_a;
	while (tmp)
	{
		tmp->index = tmp->index - 2;
		tmp = tmp->next;
	}
	if ((*lst_b)->index < (*lst_b)->next->index)
		sb(lst_b);
	sort_three(lst_a);
	pa(lst_b, lst_a);
	pa(lst_b, lst_a);
}
