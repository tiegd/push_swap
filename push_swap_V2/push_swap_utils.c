/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:23:44 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/06 18:29:55 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	atoi_ps(const char *nptr)
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
			return (INT_MIN);
		else if ((unsigned long long) count > INT_MAX && inv == 1)
			return (0);
		nptr++;
	}
	return (count * inv);
}

int	check_lst(t_clist **lst)
{
	t_clist	*tmp;
	t_clist	*current;

	tmp = (*lst);
	current = (*lst);
	while (current)
	{
		while (tmp)
		{
			if (tmp->data == current->data)
			{
				printf("data = %d\n", tmp->data);
				write(1, "Error\n", 6);
				return (0);
			}
			tmp = tmp->next;
		}
		current = current->next;
	}
	return (1);
}
