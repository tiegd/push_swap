/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:44:19 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/19 14:44:20 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *) s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	size_t	n = 5;
	const char	s[] = "Salut !";
	char	c = 'u';

	printf("%llu\n", (unsigned long long) s);
	printf("%llu\n", (unsigned long long) (ft_memchr(s, c, n)));
	printf("%llu\n", (unsigned long long) (memchr(s, c, n)));
}
*/