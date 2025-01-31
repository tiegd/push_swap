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
	int				data;
	int				index;
	struct s_dclist	*prev;
	struct s_dclist	*next;
}					t_dclist;

int	check_digit(int size, char **input);
int	ft_isdup(int size, char **input);
int	is_to_long(int size, char **input);
int	ft_check(int size, char **arg);
t_dclist	*new_node(int content, int index);
void	add_node_front(t_dclist **lst, t_dclist *new);
void	add_node_back(t_dclist *lst, t_dclist *new);
void	del_node(t_dclist *lst);
t_dclist	*fill_stack_a(int size, char **input);
void	fill_index(int size, t_dclist **lst_a);
int	check_bit(int a, int b);
void	*sa(t_dclist **lst_a);
void	*sb(t_dclist **lst_b);
void	*ss(t_dclist **lst_a, t_dclist **lst_b);
void	*pa(t_dclist **lst_b, t_dclist **lst_a);
void	*pb(t_dclist **lst_a, t_dclist **lst_b);
void	*rra(t_dclist **lst_a);
void	*rrb(t_dclist **lst_b);
void	*rrr(t_dclist **lst_a, t_dclist **lst_b);
void	*ra(t_dclist **lst_a);
void	*rb(t_dclist **lst_b);
void	*rr(t_dclist **lst_a, t_dclist **lst_b);
void	push_swap(t_dclist **lst_a, t_dclist **lst_b, int size);
void    sort_little(t_dclist **lst_a, int size);

#endif
