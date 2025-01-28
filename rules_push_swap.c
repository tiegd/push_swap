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


void	sa(t_dclist **lst_a)
{
	ft_swap(&((*lst_a)->data), &((*lst_a)->next->data));
	write(1, "sa\n", 3);
}

void	sb(t_dclist **lst_b)
{
	ft_swap(&((*lst_b)->data), &((*lst_b)->next->data));
	write(1, "sb\n", 3);
}

void	ss(t_dclist **lst_a, t_dclist **lst_b)
{
	ft_swap(&((*lst_a)->data), &((*lst_a)->next->data));
	ft_swap(&((*lst_b)->data), &((*lst_b)->next->data));
	write(1, "ss\n", 3);
}

// char	*sa(t_dclist **lst_a)
// {
// 	t_dclist	*new;

// 	(*lst_a) = (*lst_a)->next;
// 	new = new_node((*lst_a)->content);
// 	(*lst_a) = (*lst_a)->prev;
// 	add_node_front(lst_a, new);
// 	del_node(lst_a);
// 	write(1, "sa\n", 3);
// }

// char	*sb(t_dclist **lst_b)
// {
// 	t_dclist	*new;

// 	(*lst_b) = (*lst_b)->next;
// 	new = new_node((*lst_b)->data);
// 	(*lst_b) = (*lst_b)->prev;
// 	add_node_front(lst_b, new);
// 	del_node(lst_b);
// 	write(1, "sb\n", 3);
// }

// char	*ss(t_dclist **lst_a, t_dclist **lst_b)
// {
// 	sa(lst_a);
// 	sb(lst_b);
// 	write(1, "ss\n", 3);
// }

char	*pa(t_dclist **lst_b, t_dclist **lst_a)
{
	t_dclist	*new;

	new = new_node((*lst_b)->data);
	add_node_front(lst_a, new);
	write(1, "pa\n", 3);
}

char	*pb(t_dclist **lst_a, t_dclist **lst_b)
{
	t_dclist	*new;

	new = new_node((*lst_a)->data);
	add_node_front(lst_b, new);
	write(1, "pb\n", 3);
}
