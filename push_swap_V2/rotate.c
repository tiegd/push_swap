/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:44:10 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/10 15:00:03 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_clist **lst)
{
	
}

void	ra(t_clist **lst_a)
{
	rotate(&lst_a);
	write(1, "ra\n", 3);
}

void	rb(t_clist **lst_b)
{
	rotate(&lst_b);
	write(1, "rb\n", 3);
}

void	rr(t_clist **lst_a, t_clist *lst_b)
{
	rotate(&lst_a);
	rotate(&lst_b);
	write(1, "rr\n", 3);
}