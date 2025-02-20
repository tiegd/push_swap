/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:24:17 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/20 14:33:58 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct s_clist
{
	int				data;
	int				index;
	struct s_clist	*next;
}				t_clist;

int			ft_isdup(int size, char **input);
int			check_number(int size, char **input);
int			is_to_long(int size, char **input);
int			ft_parser(int size, char **input);
int			atoi_ps(const char *nptr, int *error);
void		free_all(char **tab);
void		free_lst(t_clist **lst);
int			check_args(char **tab, int size);
char		**fill_new_tab(char **tab);

t_clist		*fill_lst(char **input, int size);
t_clist		*lst_new(int data, int index);
t_clist		*lst_last(t_clist *lst);
void		lst_add_back(t_clist **lst, t_clist *new);
void		add_index(int size, t_clist **lst);

int			tab_len(char **tab);
int			lst_size(t_clist *lst);
void		sort_three(t_clist **lst);
void		sort_four(t_clist **lst_a, t_clist **lst_b);
void		sort_five(t_clist **lst_a, t_clist **lst_b);
int			is_sorted(t_clist **lst_a);
void		lil_sort(t_clist **lst_a, t_clist **lst_b);
static int	count_bit(int n);
void		radix(t_clist **lst_a, t_clist **lst_b, int size_a);

void		swap(t_clist **lst);
void		sa(t_clist **lst_a);
void		sb(t_clist **lst_b);
void		ss(t_clist **lst_a, t_clist **lst_b);
void		push(t_clist **src, t_clist **dest);
void		pa(t_clist **lst_b, t_clist **lst_a);
void		pb(t_clist **lst_a, t_clist **lst_b);
void		rotate(t_clist **lst);
void		ra(t_clist **lst_a);
void		rb(t_clist **lst_b);
void		rr(t_clist **lst_a, t_clist **lst_b);
void		rev_rotate(t_clist **lst);
void		rra(t_clist **lst_a);
void		rrb(t_clist **lst_b);
void		rrr(t_clist **lst_a, t_clist **lst_b);

#endif
