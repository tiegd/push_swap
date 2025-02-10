/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:44:21 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/10 15:02:26 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate()
{
	
}

void	rra(t_clist **lst_a)
{
	rev_rotate(&lst_a);
	write(1, "rra\n", 4);
}

void	rrb(t_clist **lst_b)
{
	rev_rotate(&lst_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_clist **lst_a, t_clist **lst_b)
{
	rev_rotate(&lst_a);
	rev_rotate(&lst_b);
	write(1, "rrr\n", 4);
}