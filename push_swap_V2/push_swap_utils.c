/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:23:44 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/14 13:24:23 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	bit_cmp(int a, int b)
// {
// 	if ((a & b) == b)
//         return (1);
//     return (0);
// }

// int lst_size(t_clist *lst)
// {
// 	int	size;

// 	size = 1;
// 	if (!lst)
// 		return (0);
// 	while (lst->next)
// 	{
// 		lst = lst->next;
// 		size++;
// 	}
// 	return (size);
// }

int	lst_size(t_clist *lst)
{
	int	size;

	size = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

void	sort_three(t_clist **lst)
{
	int		count;
	t_clist	*tmp;
	
	count = 0;
	while (!is_sorted(lst))
	{
		tmp = (*lst)->next;
		if (tmp->index == 2)
			sa(lst);
		if ((*lst)->index == 2)
			ra(lst);
		if ((*lst)->index > tmp->index)
			sa(lst);
		count++;
	}
	printf("nb operation = %d\n\n", count);
}

void	sort_four(t_clist **lst)
{
	int		count;
	t_clist	*tmp;
	
	count = 0;
	while (!is_sorted(lst))
	{
		tmp = (*lst)->next;
		if ((*lst)->index < tmp->index)
			ra(lst);
		if ((*lst)->index > tmp->index)
			sa(lst);
		// if (tmp->index == 3)
		// 	sa(lst);
		if ((*lst)->index == 3)
			ra(lst);
		count++;
	}
	printf("nb operation = %d\n\n", count);
}

void	sort_five(t_clist **lst)
{
	int		count;
	t_clist	*tmp;
	
	count = 0;
	while (!is_sorted(lst))
	{
		tmp = (*lst)->next;
		if ((*lst)->index < tmp->index)
			ra(lst);
		if ((*lst)->index > tmp->index)
			sa(lst);
		// if (tmp->index == 4)
		// 	sa(lst);
		if ((*lst)->index == 4)
			ra(lst);
		count++;
	}
	printf("nb operation = %d\n\n", count);
}

void	init_lst_b(t_clist **lst_b)
{
	t_clist	*new;

	new = lst_new(0, 0);
	*lst_b = new;
	// lst_add_back(lst_b, new);
}
