/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:44:21 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/11 15:15:54 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_clist **lst)
{
	t_clist	*new;
	t_clist	*last;
	t_clist	*tmp;

	tmp = *lst;
	last = lst_last(*lst);
	new = lst_new(last->data, last->index);
	new->next = tmp;
	*lst = new;
	while (tmp->next != last)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	rra(t_clist **lst_a)
{
	rev_rotate(lst_a);
	write(1, "rra\n", 4);
}

void	rrb(t_clist **lst_b)
{
	rev_rotate(lst_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_clist **lst_a, t_clist **lst_b)
{
	rev_rotate(lst_a);
	rev_rotate(lst_b);
	write(1, "rrr\n", 4);
}