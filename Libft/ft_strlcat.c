/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:51:10 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/18 07:35:41 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensource;
	size_t	lendest;
	size_t	i;

	lensource = ft_strlen(src);
	lendest = ft_strlen(dst);
	i = 0;
	if (size > lendest)
	{
		while ((i < size - 1 - lendest) && src[i])
		{
			dst[lendest + i] = src[i];
			i++;
		}
		dst[lendest + i] = '\0';
		return (lensource + lendest);
	}
	return (lensource + size);
}
