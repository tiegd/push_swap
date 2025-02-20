# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/31 15:59:43 by gaducurt          #+#    #+#              #
#    Updated: 2025/02/20 14:38:01 by gaducurt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3

HEADER = 	Libft/libft.h	\
			push_swap.h
			
OBJDIR = .obj_push_swap

SRC = 	main.c				\
		parsing.c			\
		parsing_utils.c		\
		push_swap_utils.c	\
		push_swap.c			\
		init_list.c			\
		swap.c				\
		push.c				\
		rotate.c			\
		rev_rotate.c		\

LIBS = Libft/libft.a

OBJ = $(patsubst %.c, $(OBJDIR)/%.o, $(SRC))

all: libft $(NAME)

libft:
	$(MAKE) -C Libft

$(NAME): $(OBJ) $(HEADER) $(LIBS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBS)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

%.o : %.c Makefile $(LIBS)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(MAKE) clean -C Libft
	rm -rf $(OBJ) Libft/fclean
fclean: clean
	rm -rf $(NAME) Libft/libft.a $(OBJDIR)
re: fclean all

.PHONY: all clean fclean re libft
