/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:44:09 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/19 18:10:51 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_clist **lst)
{
	t_clist	*tmp;

	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = (*lst)->next;
	(*lst)->next = tmp;
}

void	sa(t_clist **lst_a)
{
	swap(lst_a);
	write(1, "sa\n", 3);
}

void	sb(t_clist **lst_b)
{
	swap(lst_b);
	write(1, "sb\n", 3);
}

void	ss(t_clist **lst_a, t_clist **lst_b)
{
	swap(lst_a);
	swap(lst_b);
	write(1, "ss\n", 3);
}
