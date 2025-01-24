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

int	ft_isdigit(int size, char **input)
{
	int i;
	int j;

	i = 1;
	while (i != isze)
	{
		j = 0;
		while (input[i][j])
		{
			if (input[i][j] < 48 || input[i][j] > 57)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_isdup(int size, char **input)
{
	int	i;
	int	j;
	int	index;

	i = 1;
	index = 0;
	while (i != size)
	{
		j = i + 1;
		while (j != size)
		{
			while (input[i][index] || input[j][index])
			{
				if (input[i][index] == '\0')
					return (0);
				index++;
			}
			j++;
		}
	}
	return (1);
}

t_dclist	*new_node(void *content)
{
	t_dclist	*new;

	new = malloc(sizeof(t_dclist));
	if (!new)
		return (NULL);
	new->content = content;
	return (new);
}

void	add_node_front(t_dclist **lst, t_dclist *new)
{
	if (lst == NULL)
	{
		lst->next = new;
		lst->prev = new;
		*lst = new;
	}
	else
	{
		t_dclist *last = (*lst)->prev;
		new->next = *lst;
		new->prev = last;
		last->next = new;
		(*lst)->prev = new;
		*lst = new;
	}
}

void	add_node_back(t_dclist **lst, t_dclist *new)
{
	if (lst == NULL)
	{
		lst->next = new;
		lst->prev = new;
		*lst = new;
	}
	else
	{
		t_dclist *last = (*lst)->prev;
		new->next = *lst;
		new->prev = last;
		last->next = new;
		(*lst)->prev = new;
	}
}

void	del_node(t_dclist *lst)
{
	if (!lst)
		return ;
	t_dclist	*current;

	*current = *lst;
	current->prev->next = current->next;
	current->next->prev = current->prev;
	if (*lst == current)
		*lst = current->next;
	free(current);
}

void    fill_stack_a(int size, char **input)
{
    int i;

    i = 1;
    while (i != size)
    {
		
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);
    if (ft_check(argv) == 1)
	{
        fill_stack(argc, argv);
        push_swap();
	}
}
