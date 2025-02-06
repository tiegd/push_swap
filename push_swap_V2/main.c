/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:45:32 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/06 18:33:52 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_clist	*lst;

	lst = NULL;
	if (argc < 2)
		return (0);
	if (ft_parser(argc, argv))
	{
		printf("Le parser fonctionne\n");
		fill_lst(&lst, argv, argc);
		if (!check_lst(&lst))
		{
			printf("oui");
			return (0);
		}
	}
	if (!ft_parser(argc, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
}
