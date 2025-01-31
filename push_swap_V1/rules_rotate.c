/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:10:48 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/27 15:10:50 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ra(t_dclist **lst_a)
{
	(*lst_a) = (*lst_a)->next;
	write(1, "ra\n", 3);
}

void	*rb(t_dclist **lst_b)
{
	(*lst_b) = (*lst_b)->next;
	write(1, "rb\n", 3);
}

void	*rr(t_dclist **lst_a, t_dclist **lst_b)
{
	ra(lst_a);
	rb(lst_b);
	write(1, "rr\n", 3);
}
