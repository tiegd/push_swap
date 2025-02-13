# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/31 15:59:43 by gaducurt          #+#    #+#              #
#    Updated: 2025/02/13 13:43:02 by gaducurt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3

HEADER = 	Libft/libft.h	\
			push_swap.h

SRC = 	main.c				\
		parsing.c			\
		push_swap_utils.c	\
		push_swap.c			\
		init_list.c			\
		print_lst.c			\
		swap.c				\
		push.c				\
		rotate.c			\
		rev_rotate.c		\

LIBS = Libft/libft.a

OBJ = $(SRC:.c=.o)

all: libft $(NAME)

libft:
	$(MAKE) -C Libft

$(NAME): $(OBJ) $(HEADER) $(LIBS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBS)

%.o : %.c Makefile $(LIBS)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(MAKE) clean -C Libft
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME) Libft/libft.a
re: fclean all

.PHONY: all clean fclean re libft
