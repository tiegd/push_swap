/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:45:32 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/04 17:50:26 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (ft_parser(argc, argv))
	{
		printf("Le parser fonctionne\n");
	}
	if (!ft_parser(argc, argv))
	{
		printf("Un truc chibre\n");
		return (0);
	}
}
