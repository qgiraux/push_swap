# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:16:14 by qgiraux           #+#    #+#              #
#    Updated: 2023/12/21 16:09:15 by qgiraux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		push_swap

CC		=		gcc

FLAG		=		-wall -wextra -werror

LIBFT		=	Libft/libft.a

SRC		=	push_swap.c init.c regles_1.c algo.c convert_list.c printer.c algo_3.c algo_moves.c refill_a.c

OBJ		=	$(src:.c=.o)

.0: .c
	$(CC) $(FLAG) -c $< -o $@

all : $(NAME)

lib :
	@make -C ./Libft/

$(NAME) : lib  $(SRC)
	$(CC) $(SRC) $(LIBFT)  -o $(NAME) -lm -g

clean:
	@make clean -sC Libft/
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C Libft/

re: fclean all

.PHONY: all clean fclean re


