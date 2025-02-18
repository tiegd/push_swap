/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:44:10 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/18 13:25:33 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_clist **lst)
{
	t_clist	*tmp;
	t_clist	*new;
	t_clist	*prev;
	
	new = lst_new((*lst)->data, (*lst)->index);
	tmp = lst_last(*lst);
	tmp->next = new;
	prev = *lst;
	*lst = (*lst)->next;
	free(prev);
}

void	ra(t_clist **lst_a)
{
	rotate(lst_a);
	write(1, "ra\n", 3);
}

void	rb(t_clist **lst_b)
{
	rotate(lst_b);
	write(1, "rb\n", 3);
}

void	rr(t_clist **lst_a, t_clist **lst_b)
{
	rotate(lst_a);
	rotate(lst_b);
	write(1, "rr\n", 3);
}