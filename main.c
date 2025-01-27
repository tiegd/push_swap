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

void	push_swap(t_dclist **lst_a, t_dclist **lst_b)
{

}

int	main(int argc, char **argv)
{
	t_dclist	**lst_a;
	t_dclist	**lst_b;


	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_check(*argv) == 1)
	{
		fill_stack_a(argc, argv);
		push_swap(lst_a, lst_b);
	}
	if (ft_check(*argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
}
