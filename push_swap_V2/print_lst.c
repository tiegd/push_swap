/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:00:17 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/10 18:08:05 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_lst(t_clist **lst)
{
	while (lst)
	{
		printf("data = %d\nindex = %d\n\n", (*lst)->data, (*lst)->index);
		*lst = (*lst)->next;
	}
}
