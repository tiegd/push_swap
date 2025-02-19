/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:38:18 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/20 16:38:20 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*dest;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	j = 0;
	dest = malloc(size * sizeof(char));
	if (!(dest))
		return (NULL);
	while (s1[i] != 0)
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*s1 = "Salut ";
	const char	*s2 = "ca va ?";

	printf("%s\n", ft_strjoin(s1, s2));
}
*/