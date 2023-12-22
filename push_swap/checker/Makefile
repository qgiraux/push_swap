# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:16:14 by qgiraux           #+#    #+#              #
#    Updated: 2023/12/22 15:35:05 by qgiraux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	checker_OS
CC			=	gcc
FLAG		=	-Wall -Wextra -Werror
SRC			=	checker.c execute.c init.c regles_1.c regles_2.c regles_3.c \
				ft_atoi.c ft_split.c ft_strncmp.c get_next_line.c ft_strlcpy.c \
				ft_strlen.c ft_substr.c ft_strdup.c ft_strjoin.c ft_strchr.c ft_calloc.c \
				ft_bzero.c
OBJ			=	$(src:.c=.o)

.0: .c
	$(CC) $(FLAG) -c $< -o $@

all : $(NAME)

$(NAME) :  $(SRC)
	$(CC) $(SRC) $(FLAG)  -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


