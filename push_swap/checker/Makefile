# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:16:14 by qgiraux           #+#    #+#              #
#    Updated: 2023/12/30 15:45:45 by qgiraux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	checker_OS
CC			=	gcc
FLAG		=	-Wall -Wextra -Werror
SRC			=	checker.c execute_bonus.c init_bonus.c regles_1_bonus.c regles_2_bonus.c \
				regles_3_bonus.c ft_atoi_bonus.c ft_split_bonus.c ft_strncmp_bonus.c \
				get_next_line_bonus.c ft_strlcpy_bonus.c ft_strlen_bonus.c ft_substr_bonus.c \
				ft_strdup_bonus.c ft_strjoin_bonus.c ft_strchr_bonus.c ft_calloc_bonus.c \
				ft_bzero_bonus.c
OBJ			=	$(SRC:.c=.o)


all : $(NAME)

$(OBJ) : $(SRC) checker.h
	$(CC) $(FLAG) -c $< -o $@

$(NAME) :  $(OBJ) checker.h
	$(CC) $(OBJ) $(FLAG)  -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


