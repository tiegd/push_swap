/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:49:49 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/21 17:03:45 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_clist **src, t_clist **dest)
{
	t_clist	*new;
	t_clist	*tmp;
	t_clist	*prev;

	tmp = *dest;
	if (*src == NULL)
		return ;
	new = lst_new((*src)->data, (*src)->index);
	new->next = tmp;
	*dest = new;
	prev = *src;
	*src = (*src)->next;
	free(prev);
}

void	pa(t_clist **lst_b, t_clist **lst_a)
{
	push(lst_b, lst_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_clist **lst_a, t_clist **lst_b)
{
	push(lst_a, lst_b);
	ft_putstr_fd("pb\n", 1);
}
