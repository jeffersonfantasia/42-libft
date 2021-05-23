# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 21:23:40 by jfranchi          #+#    #+#              #
#    Updated: 2021/05/22 22:36:43 by jfranchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 ###############################################################################
#																				#
#								CREATE VARIABLE									#
#																				#
 ###############################################################################

#Future directories
APPS = .
BIN = .
INCLUDE = .
LIB = .
OBJ = .
SRC = .

#Library
NAME = ${LIB}/libft.a

#Compilation
CC = gcc
FLAGS = -Wall -Werror -Wextra

#Files .c
SRCS = $(wildcard *.c)

#Generate files .o
OBJS = $(SRCS:.c=.o)

 ###############################################################################
#																				#
#										RULES									#
#																				#
 ###############################################################################

all: ${NAME}

$(NAME): $(OBJS)
	@ar -rcs $@ ${OBJ}/$<
	@echo "Library has been created successfully!"

${OBJ}/%.o: ${SRC}/%.c
	@${CC} -c ${FLAGS} $< -I ${INCLUDE} -o $@
	@echo "Objects has been created successfully"

clean:
	@rm -f ${OBJ}/*.o
	@echo "Objects has been deleted"

fclean:	clean
	@rm -f ${NAME}
	@echo "Library has been deleted"

re:	fclean	all

.PHONY:	all, clean, fclear, re