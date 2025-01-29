/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:14:50 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/27 15:14:52 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*rra(t_dclist **lst_a)
{
	(*lst_a) = (*lst_a)->prev;
	write(1, "rra\n", 4);
}

void	*rrb(t_dclist **lst_b)
{
	(*lst_b) = (*lst_b)->prev;
	write(1, "rrb\n", 4);
}

void	*rrr(t_dclist **lst_a, t_dclist **lst_b)
{
	rra(lst_a);
	rrb(lst_b);
	write(1, "rrr\n", 4);
}
