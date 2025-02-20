/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:07:35 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/20 14:00:41 by gaducurt         ###   ########.fr       */
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

void	free_all(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_lst(t_clist **lst)
{
	t_clist	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
}

int	check_args(char **tab, int size)
{
	int		i;
	int		error;

	error = 0;
	if (!ft_parser(size, tab))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	while (tab[i])
	{
		atoi_ps(tab[i], &error);
		if (error != 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

char	**fill_new_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
