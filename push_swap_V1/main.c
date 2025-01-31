/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:09:22 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/27 13:09:23 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_dclist	**lst_a;
	t_dclist	**lst_b;
	int			*index;

	index = malloc((argc - 1) * sizeof(int));
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_check(argc, *argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_check(argc, *argv) == 1)
	{
		*lst_a = fill_stack_a(argc, argv);
		fill_index(argc - 1, lst_a);
		if (argc >= 6)
			push_swap(lst_a, lst_b, argc - 1);
		else
			sort_little(lst_a, argc - 1);
	}
	return (0);
}
