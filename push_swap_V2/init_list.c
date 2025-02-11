/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:02:45 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/11 15:50:23 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fill_lst(t_clist **lst, char **input, int size, int i)
{
	int		data;
	int		error;
	int		nb_args;
	t_clist	*new;

	error = 0;
	if (i == 0)
		nb_args = 1;
	else
		nb_args = 2;
	if (lst)
	{
		while (i < size)
		{
			data = atoi_ps(input[i], &error);
			if (error != 0)
				return (0);
			new = lst_new(data, 0);
			lst_add_back(lst, new);
			i++;
		}
		add_index(size - nb_args, lst);
	}
	return (1);
}

t_clist	*lst_new(int data, int index)
{
	t_clist	*new;

	new = malloc(sizeof(t_clist));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->data = data;
	new->index = index;
	new->next = NULL;
	return (new);
}

t_clist	*lst_last(t_clist *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	lst_add_back(t_clist **lst, t_clist *new)
{
	t_clist	*tmp;

	tmp = (*lst);
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		tmp = lst_last(*lst);
		tmp->next = new;
	}
}

void	add_index(int size, t_clist **lst)
{
	int		i;
    t_clist	*head;
	t_clist	*current;

	current = *lst;
	while (current)
	{
		i = size;
		head = *lst;
		while (head)
		{
			if (current->data < head->data)
				i--;
			head = head->next;
		}
		current->index = i;
		current = current->next;
	}
}
