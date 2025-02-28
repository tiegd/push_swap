/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:43:52 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/22 08:43:55 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_putdest(size_t count, int n, char *dest, size_t i)
{
	while (count-- > i)
	{
		dest[count] = (n % 10) + '0';
		n /= 10;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char		*dest;
	size_t		count;
	int			nb;
	size_t		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_count(n);
	nb = n;
	i = 0;
	if (n < 0 || count == 0)
		count++;
	dest = ft_calloc(sizeof(char), count + 1);
	if (!(dest))
		return (NULL);
	else if (n < 0)
	{
		n = -n;
		dest[0] = '-';
		i++;
	}
	dest = ft_putdest(count, n, dest, i);
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	printf("n = %s\n", ft_itoa(0));
	printf("n = %s\n", ft_itoa(42));
	printf("n = %s\n", ft_itoa(45625));
	printf("n = %s\n", ft_itoa(-51));
	printf("n = %s\n", ft_itoa(-1));
	printf("n = %s\n", ft_itoa(2147483647));
	printf("n = %s\n", ft_itoa(-2147483648));
}
*/