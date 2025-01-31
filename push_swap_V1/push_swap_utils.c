/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:23:09 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/28 14:23:11 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dclist	*fill_stack_a(int size, char **input)
{
	int			i;
	int			number;
	t_dclist	*lst_a;
	t_dclist	*new;

    i = 1;
	lst_a = NULL;
    while (i <= size)
	{
		number = ft_atoi((const char *) input[i]);
		new = new_node(number, 0);
		add_node_back(lst_a, new);
		i++;
	}
	return (lst_a);
}

void	fill_index(int size, t_dclist **lst_a)
{
	int			i;
	int			count;
	t_dclist	*tmp;
	t_dclist	*start;

	count = 0;
	start = (*lst_a);
	if (!lst_a || !(*lst_a))
		return ;
	while (count <= size)
	{
		i = size;
		tmp = (*lst_a)->next;
		while (tmp != start)
		{
			if (start->data < tmp->data)
				i--;
			tmp = tmp->next;
		}
		(*lst_a)->index = i;
		(*lst_a) = (*lst_a)->next;
		count++;
	}
}

// int	check_bit(int a, int b)
// {
// 	if (a & b == 0)
// 		return (0);
// 	if (a & b == 1)
// 		return (1);
// }
