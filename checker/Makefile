# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:16:14 by qgiraux           #+#    #+#              #
#    Updated: 2023/12/22 13:49:32 by qgiraux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	checker_OS
CC			=	gcc
FLAG		=	-Wall -Wextra -Werror
LIBFT		=	Libft/libft.a
SRC			=	checker.c execute.c init.c regles_1.c regles_2.c regles_3.c
OBJ			=	$(src:.c=.o)

.0: .c
	$(CC) $(FLAG) -c $< -o $@

all : $(NAME)

lib :
	@make -C ./Libft/


$(NAME) : lib  $(SRC)
	$(CC) $(SRC) $(LIBFT) $(FLAG)  -o $(NAME)

clean:
	@make clean -sC Libft/
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C Libft/

re: fclean all

.PHONY: all clean fclean re


