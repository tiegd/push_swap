/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:24:17 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/14 16:10:46 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
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

void	print_lst(t_clist **lst);
int		ft_isdup(int size, char **input);
int		check_number(int size, char **input);
int		is_to_long(int size, char **input);
int		ft_parser(int size, char **input);
int		fill_lst(t_clist **lst, char **input, int size, int i);
t_clist	*lst_new(int data, int index);
t_clist	*lst_last(t_clist *lst);
void	add_index(int size, t_clist **lst);
void	lst_add_back(t_clist **lst, t_clist *new);
void	lst_display(t_clist *lst);
int		atoi_ps(const char *nptr, int *error);
void	free_node(t_clist *lst);
int		check_args(t_clist **lst_a, char **input, int size);
void	free_all(char **tab);
int		nb_word(const char *s, char c);

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

int	    is_sorted(t_clist **lst_a);
void	radix(t_clist **lst_a, t_clist **lst_b, int size);
int 	bit_cmp(int a, int b);
int		lst_size(t_clist *lst);
void	lil_sort(t_clist **lst);
void	sort_three(t_clist **lst);
void	sort_four(t_clist **lst);
void	sort_five(t_clist **lst);

#endif

