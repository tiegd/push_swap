/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:37:54 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/25 14:37:56 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buffer;

	if (!del)
		return ;
	if (lst)
	{
		while (*lst)
		{
			buffer = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = buffer;
		}
	}
}
