/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 08:57:49 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/11 14:44:01 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_H
# define RULES_H

# include "push_swap.h"

void	swap(t_clist **lst);
void	sa(t_clist **lst_a);
void	sb(t_clist **lst_b);
void	ss(t_clist **lst_a, t_clist **lst_b);
void	push(t_clist **src, t_clist **dest);
void	pa(t_clist **lst_b, t_clist **lst_a);
void	pb(t_clist **lst_a, t_clist **lst_b);
void	rotate(t_clist **lst);
void	ra(t_clist **lst_a);
void	rb(t_clist **lst_b);
void	rr(t_clist **lst_a, t_clist **lst_b);
void	rev_rotate(t_clist **lst);
void	rra(t_clist **lst_a);
void	rrb(t_clist **lst_b);
void	rrr(t_clist **lst_a, t_clist **lst_b);

#endif
