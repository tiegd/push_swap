/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:49:49 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/11 14:30:39 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_clist **src, t_clist **dest)
{
	t_clist	*new;
	t_clist *tmp;

	tmp = *dest;
	new = lst_new((*src)->data, (*src)->index);
	new->next = tmp;
	*dest = new;
	*src = (*src)->next;
}

void	pa(t_clist **lst_b, t_clist **lst_a)
{
	push(lst_b, lst_a);
	write(1, "pa\n", 3);
}

void	pb(t_clist **lst_a, t_clist **lst_b)
{
	push(lst_a, lst_b);
	write(1, "pb\n", 3);
}