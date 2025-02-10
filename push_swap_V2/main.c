/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:45:32 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/10 17:37:07 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_clist	*lst;

	if (argc < 2)
		return (0);
	lst = malloc(sizeof(t_clist));
	if (!lst)
		return (0);
	lst = NULL;
	if (check_args(&lst, argv, argc))
		// push_swap(t_clist **lst);
		return (0);	
	// if (ft_parser(argc, argv))
	// {
	// 	lst = malloc(sizeof(t_clist));
	// 	if (!lst)
	// 		return (0);
	// 	lst = NULL;
	// 	fill_lst(&lst, argv, argc);
	// 	if (!fill_lst(&lst, argv, argc))
	// 	{
	// 		write(1, "Error\n", 6);
	// 		return (0);
	// 	}
	// }
	if (!ft_parser(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
}
