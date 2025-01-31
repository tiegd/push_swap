/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:45:32 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/31 17:12:19 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	// if (ft_parser(argc, argv))
	if (ft_isdup(argc, argv))
	{
		printf("Le parser fonctionne pour ce cas");
	}
	// if (!ft_parser(argc, argv))
	if (!ft_isdup(argc, argv))
	{
		printf("Un truc chibre pour ce cas");
		return (0);
	}
}
