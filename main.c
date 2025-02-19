/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:45:32 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/19 18:31:58 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_clist	*lst_a;
	t_clist	*lst_b;
	int		i;

	i = ac - 1;
	lst_b = NULL;
	if (ac > 2)
		av = fill_new_tab(av);
	else if (ac <= 2)
	{
		if (ac == 1)
			return (0);
		av = ft_split(av[1], ' ');
		i = tab_len(av);
	}
	if (check_args(av, i))
	{
		lst_a = fill_lst(av, i);
		if (ac == 2)
			free_all(av);
		radix(&lst_a, &lst_b, i);
		free_lst(&lst_a);
	}
	return (0);
}
