/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:02:45 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/19 17:59:16 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_clist	*fill_lst(char **input, int size)
{
	int		data;
	int		i;
	t_clist	*lst;
	t_clist	*new;

	i = 0;
	lst = NULL;
	while (i < size)
	{
		data = ft_atoi(input[i]);
		new = lst_new(data, 0);
		if (i == 0)
			lst = new;
		else
			lst_add_back(&lst, new);
		i++;
	}
	add_index(size, &lst);
	return (lst);
}

t_clist	*lst_new(int data, int index)
{
	t_clist	*new;

	new = NULL;
	new = malloc(sizeof(t_clist));
	if (!new)
		return (NULL);
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

	tmp = NULL;
	if (!new)
		return ;
	tmp = lst_last(*lst);
	if (tmp)
		tmp->next = new;
}

void	add_index(int size, t_clist **lst)
{
	int		i;
	t_clist	*head;
	t_clist	*current;

	current = *lst;
	while (current)
	{
		i = size - 1;
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
