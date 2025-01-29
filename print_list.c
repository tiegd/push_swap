/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:37:52 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/29 15:37:53 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	int			i;
	t_dclist	**lst_a;
	t_dclist	*start;

	i = 0;
	*lst_a = fill_stack_a(argc, argv);
	fill_index(argc - 1, lst_a);
	printf("num noeud = %d, data = %d, index = %d", i, (*lst_a)->data, (*lst_a)->index);
	start = *lst_a;
	*lst_a = (*lst_a)->next;
	i++;
	while ((*lst_a) != start)
	{
		printf("num noeud = %d, data = %d, index = %d", i, (*lst_a)->data, (*lst_a)->index);
		i++;
		(*lst_a) = (*lst_a)->next;
	}
	
}
