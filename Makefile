# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 21:23:40 by jfranchi          #+#    #+#              #
#    Updated: 2021/05/22 22:39:54 by jfranchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 ###############################################################################
#																				#
#								CREATE VARIABLE									#
#																				#
 ###############################################################################

#Library
NAME = libft.a

#Compilation
CC = gcc
FLAGS = -Wall -Werror -Wextra

#List all the source files with .c
SRCS = $(wildcard *.c)

#Generate files .o for "all" rule
OBJS = $(SRCS:.c=.o)

 ###############################################################################
#																				#
#										RULES									#
#																				#
 ###############################################################################

all: ${NAME}

$(NAME): $(OBJS)
	@ar -rcs $@ $<
	@echo "Library has been created successfully!"

%.o: %.c
	@${CC} -c ${FLAGS} $< -o $@
	@echo "Objects has been created successfully"

clean:
	@rm -f *.o
	@echo "Objects has been deleted"

fclean:	clean
	@rm -f ${NAME}
	@echo "Library has been deleted"

re:	fclean	all

.PHONY:	all, clean, fclear, re