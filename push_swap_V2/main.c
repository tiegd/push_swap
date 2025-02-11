/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:45:32 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/11 14:52:30 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "rules.h"

int	main(int argc, char **argv)
{
	t_clist	*lst;
	t_clist	*lst2;

	if (argc < 2)
		return (0);
	lst = malloc(sizeof(t_clist));
	if (!lst)
		return (0);
	lst = NULL;
	if (check_args(&lst, argv, argc))
	{
		lst2 = lst;
		// push_swap(lst);
		rra(&lst);
		print_lst(&lst);
		// print_lst(&lst2);
	}
	if (!ft_parser(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);	
}
