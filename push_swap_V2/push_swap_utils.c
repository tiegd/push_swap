/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:23:44 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/11 16:11:47 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bit_cmp(int a, int b)
{
	if (a & b == b)
        return (1);
    return (0);
}

int	bit_shift(int a)
{
	a = a << 1;
    return (a);
}


