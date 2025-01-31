# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/31 15:59:43 by gaducurt          #+#    #+#              #
#    Updated: 2025/01/31 16:21:44 by gaducurt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3

HEADER = 	libft.h	\
			push_swap.h

SRC = 	main.c				\
		parsing.c			\
		push_swap_utils.c	\
		push_swap.c			\

LIBS = Libft/libft.a

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) $(LIBS)
	ar rcs $(NAME) $?

%.o : %.c Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all fclean re
