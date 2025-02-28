/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:54:50 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/18 14:33:24 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char) s1[i] == (unsigned char) s2[i]) && i < n - 1)
	{
		if ((unsigned char) s1[i] == '\0')
			return (0);
		i++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
