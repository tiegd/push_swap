/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:45:08 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/18 16:25:49 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if ((nmemb * size) / size != nmemb)
		return (NULL);
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}

/*
#include <stdio.h>
#include <assert.h>

#define INT_NUMBER 10

int main() {
    
    int i;
    int * pointer = (int *) ft_calloc( INT_NUMBER, sizeof(int) );

    assert( pointer != NULL );

    for ( i=0; i<INT_NUMBER-1; i++ ) {
        pointer[i] = i;
    }

    for (i=0; i<INT_NUMBER; i++ ) {
        printf( "%d ", pointer[i] );
    }
    printf( "\n" );

    free( pointer );

    return 0;
}*/
