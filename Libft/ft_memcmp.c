/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:51:04 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/20 12:51:08 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n - 1)
	{
		if (i == n)
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t		n;
	const char	s1[] = "zyxbcdefgh";
	const char	s2[] = "abcdefgxyz";

	n = 0;
	printf("%d\n", (ft_memcmp(s1, s2, n)));
	printf("%d\n", (memcmp(s1, s2, n)));
}
*/