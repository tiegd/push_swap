/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:45:32 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/04 17:55:21 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_display(t_clist *lst)
{
	t_clist	*tmp;

	tmp = lst;
	while (tmp->next)
	{
		printf("data = %d\n", lst->data);
		tmp = tmp->next;
	}
}

int	main(int argc, char **argv)
{
	t_clist	*lst;

	if (argc < 2)
		return (0);
	if (ft_parser(argc, argv))
	{
		fill_lst(&lst, argv, argc);
		printf("Le parser fonctionne\n");
	}
	if (!ft_parser(argc, argv))
		return (0);
}
