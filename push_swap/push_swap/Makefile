# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:16:14 by qgiraux           #+#    #+#              #
#    Updated: 2023/12/29 18:04:25 by qgiraux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	gcc
FLAG	=	-Wall -Wextra -Werror
SRC		=	push_swap.c init.c regles_1.c regles_2.c regles_3.c algo.c \
			algo_3.c algo_moves.c refill_a.c utils_1.c utils_2.c ft_atoi.c ft_split.c \
			ft_strlcpy.c ft_strlen.c
OBJ		=	$(src:.c=.o)

$(OBJ): $(SRC)
	$(CC) $(FLAG) -c $< -o $@

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(SRC)  $(FLAG)  -o $(NAME) -g

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


