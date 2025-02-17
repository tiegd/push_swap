/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:45:32 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/17 18:32:38 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_clist	*lst_a;
	t_clist	*lst_b;

	if (ac < 2)
		return (0);
	lst_a = malloc(sizeof(t_clist));
	if (!lst_a)
		return (0);
	lst_a = NULL;
	lst_b = lst_a;
	if (check_args(&lst_a, av, ac))
		radix(&lst_a, &lst_b, ac - 1);
	return (0);	
}
