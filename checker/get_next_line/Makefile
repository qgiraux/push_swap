# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 11:19:05 by qgiraux           #+#    #+#              #
#    Updated: 2023/12/22 11:26:54 by qgiraux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl.a

SRC =  get_next_line.c


OBJ = $(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	ar -r $@ $?

$(OBJ) : $(SRC)
	$(CC) -c $(FLAGS) $? get_next_line.h

clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : clean all
