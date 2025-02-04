/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:24:17 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/04 15:14:31 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct s_list_i
{
	int				data;
	int				index;
	struct s_list_i	*next;
}				t_list_i;

int	ft_parser(int size, char **input);
int	ft_isdup(int size, char **input);
int	check_number(int size, char **input);
int	is_to_long(int size, char **input);
int	ft_parser(int size, char **input);

#endif

