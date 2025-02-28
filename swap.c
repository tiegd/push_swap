/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:44:09 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/21 17:04:00 by gaducurt         ###   ########.fr       */
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
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_clist **lst_b)
{
	swap(lst_b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_clist **lst_a, t_clist **lst_b)
{
	swap(lst_a);
	swap(lst_b);
	ft_putstr_fd("ss\n", 1);
}
