/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 07:55:40 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/19 10:39:09 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ndest;
	const char		*nsrc;

	i = 0;
	ndest = dest;
	nsrc = src;
	if (dest == 0 && src == 0)
		return (NULL);
	while (i < n)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	dest1[7];
	char	dest2[7];
	char	*src = "Hello !";

	ft_memcpy((void *) dest1, (const void *) src, 6);
	printf("%s\n", (dest1));

	memcpy((void *) dest2, (const void *) src, 6);
	printf("%s\n", dest2);
}
*/