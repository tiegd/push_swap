/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:37:28 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/18 14:42:26 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int	count;
	int	inv;

	count = 0;
	inv = 1;
	if (!nptr)
		return (0);
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
			return (INT_MAX);
		nptr++;
	}
	return (count * inv);
}
