/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 08:52:48 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/17 08:52:52 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// void	sa(t_dclist **lst_a)
// {
// 	ft_swap(&((*lst_a)->data), &((*lst_a)->next->data));
// 	write(1, "sa\n", 3);
// }

// void	sb(t_dclist **lst_b)
// {
// 	ft_swap(&((*lst_b)->data), &((*lst_b)->next->data));
// 	write(1, "sb\n", 3);
// }

// void	ss(t_dclist **lst_a, t_dclist **lst_b)
// {
// 	ft_swap(&((*lst_a)->data), &((*lst_a)->next->data));
// 	ft_swap(&((*lst_b)->data), &((*lst_b)->next->data));
// 	write(1, "ss\n", 3);
// }

void	*sa(t_dclist **lst_a)
{
	t_dclist	*new;
	t_dclist	*tmp;

	tmp = (*lst_a)->next;
	new = new_node(tmp->data, tmp->index);
	del_node(tmp);
	add_node_front(lst_a, new);
	write(1, "sa\n", 3);
}

void	*sb(t_dclist **lst_b)
{
	t_dclist	*new;
	t_dclist	*tmp;

	tmp = (*lst_b)->next;
	new = new_node(tmp->data, tmp->index);
	del_node(tmp);
	add_node_front(lst_b, new);
	write(1, "sb\n", 3);
}

void	*ss(t_dclist **lst_a, t_dclist **lst_b)
{
	sa(lst_a);
	sb(lst_b);
	write(1, "ss\n", 3);
}

void	*pa(t_dclist **lst_b, t_dclist **lst_a)
{
	t_dclist	*new;

	new = new_node((*lst_b)->data, (*lst_b)->index);
	add_node_front(lst_a, new);
	write(1, "pa\n", 3);
}

void	*pb(t_dclist **lst_a, t_dclist **lst_b)
{
	t_dclist	*new;

	new = new_node((*lst_a)->data, (*lst_a)->index);
	add_node_front(lst_b, new);
	write(1, "pb\n", 3);
}
