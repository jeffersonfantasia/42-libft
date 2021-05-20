# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 21:23:40 by jfranchi          #+#    #+#              #
#    Updated: 2021/05/19 21:33:10 by jfranchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Create variables
NAME = libft.a
OBJ =
CC = cgg
FLAGS = -Wall -Werror -Wextra

#target:	dependencies
#	action
all:

clean:
	rm -f *.o

fclean:	clean

re:


%.o:	%.c
	${CC}	${FLAGS}	$< -o $@

.PHONY:	all, clean, fclear, re