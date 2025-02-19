/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:22:45 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/18 12:34:45 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *) &s[len]);
	while (s[i])
	{
		if ((char) s[i] == (char) c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	const char	s[] = "Salut !";
	char	c = 'u';

	printf("%s", (ft_strchr(s, c)));
}
*/