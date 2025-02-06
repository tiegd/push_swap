/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:02:45 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/06 17:33:54 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_lst(t_clist **lst, char **input, int size)
{
	int		i;
	int		data;
	t_clist	*tmp;
	t_clist	*new;

	if (!lst)
		return ;
	if (lst)
	{
		tmp = *lst;
		i = 1;
		while (i < size)
		{
			data = atoi_ps(input[i]);
			new = lst_new(data);
			lst_add_back(&tmp, new);
			i++;
		}
		add_index(size - 2, &tmp);
	}
}

t_clist	*lst_new(int data)
{
	t_clist	*new;

	new = malloc(sizeof(t_clist));
	if (!new)
		return (NULL);
	new->data = data;
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
	t_clist	*ptr;

	if (!new)
		return ;
	if (lst)
	{
		if (*lst == 0)
			*lst = new;
		else
		{
			ptr = lst_last(*lst);
			ptr->next = new;
		}
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
