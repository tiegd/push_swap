/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:02:45 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/07 18:57:25 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fill_lst(t_clist **lst, char **input, int size)
{
	int		i;
	int		data;
	int		error;
	t_clist	*new;

	i = 1;
	error = 0;
	if (lst)
	{
		while (i < size)
		{
			data = atoi_ps(input[i], &error);
			printf("fill_lst -> atoi_ps error = %d\n", error);
			if (error != 0)
				return (0);
			new = lst_new(data);
			lst_add_back(lst, new);
			i++;
		}
		add_index(size - 2, lst);
	}
	return (1);
}

t_clist	*lst_new(int data)
{
	t_clist	*new;

	new = malloc(sizeof(t_clist));
	if (!new)
	{
		free(new);
		return (NULL);
	}
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
		// printf("Dans lst_addback :\ntmp->data = %d\n\n", tmp->data);
		tmp->next = new;
	}
}

void	add_index(int size, t_clist **lst)
{
	int		i;
    t_clist	*head;
	t_clist	*current;

	current = *lst;
	// printf("lst->data = %d\nlst->index = %d\n\n", current->data, current->index);
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
		// printf("lst->data = %d\nlst->index = %d\n\n", current->data, current->index);
		current = current->next;
	}
}

// void	lst_free(t_clist **lst)
// {
// 	if (lst)
// 	{
// 		free((*lst)->data);
// 		free((*lst)->index);
// 	}
// 	free(*lst);
// }
