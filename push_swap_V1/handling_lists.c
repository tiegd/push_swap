/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 08:52:58 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/17 08:53:00 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dclist	*new_node(int content, int index)
{
	t_dclist	*new;

	new = malloc(sizeof(t_dclist));
	if (!new)
		return (NULL);
	new->data = content;
	new->index = index;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	add_node_front(t_dclist **lst, t_dclist *new)
{
	t_dclist *last;

	if (lst == NULL)
	{
		(*lst)->next = new;
		(*lst)->prev = new;
		*lst = new;
	}
	else
	{
		last = (*lst)->prev;
		new->next = *lst;
		new->prev = last;
		last->next = new;
		(*lst)->prev = new;
		*lst = new;
	}
}

void	add_node_back(t_dclist *lst, t_dclist *new)
{
	t_dclist *last;

	if (lst == NULL)
	{
		new->next = new;
		new->prev = new;
		lst = new;
	}
	else
	{
		last = lst->prev;
		new->next = lst;
		new->prev = last;
		last->next = new;
		lst->prev = new;
	}
}

void	del_node(t_dclist *lst)
{
	t_dclist	*current;

	if (!lst)
		return ;
	current = lst;
	current->prev->next = current->next;
	current->next->prev = current->prev;
	if (lst == current)
		lst = current->next;
	free(current);
}
