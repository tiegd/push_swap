/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:07:35 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/11 16:08:45 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	atoi_ps(const char *nptr, int *error)
{
	int	count;
	int	inv;

	count = 0;
	inv = 1;
	while (*nptr == ' ' || ((*nptr >= 9 && *nptr <= 13) && *nptr != 0))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			inv = -inv;
		nptr++;
	}
	while ((*nptr >= '0' && *nptr <= '9') && *nptr != '\0')
	{
		count = (count * 10) + (*nptr - '0');
		if ((unsigned long long) count > (unsigned long long)INT_MAX + 1
			&& inv == -1)
			*error += 1;
		else if ((unsigned long long) count > INT_MAX && inv == 1)
			*error += 1;
		nptr++;
	}
	return (count * inv);
}

// void	free_node(t_clist *lst)
// {
// 	if (lst)
// 	{
// 		lst->data = 0;
// 		lst->index = 0;
// 	}
// 	free(lst);
// }

void	free_all(char **tab)
{
	int	i;

	i = 2;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
