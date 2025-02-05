/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:02:45 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/04 18:28:14 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_lst(t_clist **lst, char **input, int size)
{
	int		i;
	int		data;
	t_clist	*tmp;
	t_clist	*new;

	if (!(*lst))
		return ;
	if (lst)
	{
		tmp = *lst;
		i = 1;
		while (i < size)
		{
			data = ft_atoi(input[i]);
			new = lst_new(data);
			ft_lstadd_back(tmp, new);
			i++;
		}
	}
	lst_display(lst);
}

t_clist	*lst_new(int data)
{
	t_clist	*new;

	new = malloc(sizeof(t_clist));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	retrun (new);
}

void	add_index(int index, t_clist **lst)
{
	
}

void	lst_new_index(int data, int index)
{
	
}
