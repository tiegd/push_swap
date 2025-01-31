/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:45:34 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/18 15:03:12 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i])
		i++;
	dest = malloc(i + 1 * sizeof(char));
	if (!(dest))
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = (char) s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	int	i = 0;
	char	s[] = "Bonjour !";

	ft_strdup(s);
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}*/