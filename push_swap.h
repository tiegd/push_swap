/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:49:43 by gaducurt          #+#    #+#             */
/*   Updated: 2025/01/17 09:49:48 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./Libft/libft.h"

typedef	struct s_dclist
{
	int			*content;
	struct s_dclist	*prev;
	struct s_dclist	*next;
}					t_dclist;

char		*sa(t_dclist **lst_a);
char		*sb(t_dclist **lst_b);
char		*ss(t_dclist **lst_a, t_dclist **lst_b);
char		*pa(t_dclist **lst_b, t_dclist **lst_a);
char		*pb(t_dclist **lst_a, t_dclist **lst_b);
char		*ra(t_dclist **lst_a);
char		*rb(t_dclist **lst_b);
char		*rr(t_dclist **lst_a, t_dclist **lst_b);
char		*rra(t_dclist **lst_a);
char		*rrb(t_dclist **lst_b);
char		*rrr(t_dclist **lst_a, t_dclist **lst_b);
t_dclist	*new_node(void *content);
void		add_node_front(t_dclist **lst, t_dclist *new);
void		add_node_back(t_dclist **lst, t_dclist *new);
void		del_node(t_dclist *lst);
void		fill_stack_a(int size, char **input);

#endif
