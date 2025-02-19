/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 06:36:41 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/22 06:36:44 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(const char *s, char c)
{
	int	nb_word;
	int	i;

	nb_word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			nb_word++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nb_word);
}

static char	**free_split(char **double_tab, int nb_word)
{
	int	i;

	i = 0;
	while (i < nb_word)
	{
		free(double_tab[i]);
		i++;
	}
	free(double_tab);
	return (NULL);
}

static char	**ft_new_str(char **double_tab, const char *s, char c, int nb_word)
{
	int		i;
	int		index;
	int		count;
	int		j;

	count = 0;
	i = 0;
	while (s[i] && count < nb_word)
	{
		j = 0;
		while (s[i] == c && s[i])
			i++;
		index = i;
		while (s[i] != c && s[i])
			i++;
		double_tab[count] = malloc((i - index + 1) * sizeof(char));
		if (double_tab[count] == NULL)
			return (free_split(double_tab, count));
		while (index < i)
			double_tab[count][j++] = s[index++];
		double_tab[count][j] = '\0';
		count++;
	}
	return (double_tab);
}

char	**ft_split(char const *s, char c)
{
	int		nb_word;
	char	**double_tab;

	if (!(s))
		return (NULL);
	nb_word = ft_count_word(s, c);
	double_tab = malloc((nb_word + 1) * sizeof(char *));
	if (!(double_tab))
		return (NULL);
	double_tab[nb_word] = NULL;
	double_tab = ft_new_str(double_tab, s, c, nb_word);
	return (double_tab);
}

/*
#include <stdio.h>

int	main()
{
	// char	*s = "hello!";
	// char	c = ' ';

	// char    **str;
    // int    i;

    // i = 0;
    // str = ft_split(s, c);
    // while (str[i] != NULL)
    // {

    //     printf("%s\n",str[i]);
    //     i++;
    // }
    // i = 0;
    // while (str[i])
    //     free(str[i++]);
    // free(str);
    // return (0);
	char **tab;

	tab = ft_split("hello!", ' ');
	int i = 0;
	while (tab[i] != NULL)
	{
		printf("- '%s'\n", tab[i]);
		i++;
	}
}
*/
