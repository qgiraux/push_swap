# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:16:14 by qgiraux           #+#    #+#              #
#    Updated: 2024/01/02 10:54:42 by qgiraux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
NAMEB	= checker
CC		= gcc
FLAG	= -Wall -Wextra -Werror
SRC		= push_swap.c init.c regles_1.c regles_2.c regles_3.c algo.c \
		  algo_3.c algo_moves.c refill_a.c utils_1.c utils_2.c ft_atoi.c ft_split.c \
		  ft_strlcpy.c ft_strlen.c
SRCB	= checker_bonus.c execute_bonus.c init_bonus.c regles_1_bonus.c regles_2_bonus.c regles_3_bonus.c \
		  ft_atoi_bonus.c ft_split_bonus.c ft_strncmp_bonus.c get_next_line_bonus.c ft_strlcpy_bonus.c \
		  ft_strlen_bonus.c ft_substr_bonus.c ft_strdup_bonus.c ft_strjoin_bonus.c ft_strchr_bonus.c ft_calloc_bonus.c \
		  ft_bzero_bonus.c
OBJ		= $(SRC:.c=.o)
OBJB	= $(SRCB:.c=.o)

all: $(NAME) $(NAMEB)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $(NAME)

$(NAMEB): $(OBJB)
	$(CC) $(OBJB) $(FLAG) -o $(NAMEB)

$(OBJ): %.o: %.c push_swap.h
	$(CC) $(FLAG) -c $< -o $@

$(OBJB): %.o: %.c checker.h
	$(CC) $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f $(OBJB)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAMEB)

re: fclean all

.PHONY: all clean fclean re
