/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:00:17 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/14 15:50:10 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_lst(t_clist **lst)
{
	t_clist	*tmp;

	tmp = (*lst);
	
	while (tmp)
	{
		printf("data = %d, index = %d\n\n", tmp->data, tmp->index);
		tmp = tmp->next;
	}
}
