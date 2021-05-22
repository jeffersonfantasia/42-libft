# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 21:23:40 by jfranchi          #+#    #+#              #
#    Updated: 2021/05/21 19:21:42 by jfranchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 ###############################################################################
#																				#
#								CREATE VARIABLE									#
#																				#
 ###############################################################################

#Bin
NAME = libft.a

#Compilation
CC = cgg
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h

#Sources
SCR = *.c

#Transform .c into .o
OBJ = $(SCR: %.c=%.o)

 ###############################################################################
#																				#
#										RULES									#
#																				#
 ###############################################################################

#Target:	Dependencies
#	Action

all:	${NAME}

${NAME}:	$(OBJ) ${HEADER}
	@ar rc $@ $<
	@echo "${NAME} has been created successfully!"
	@runlib $(NAME)
	@echo "${NAME} has been indexed successfully!"


%.o:	%.c
	${CC} -c ${FLAGS} $< -o $@

clean:
	@rm -f ${OBJ}
	@echo "Objects has been deleted"

fclean:	clean
	@rm -f ${NAME}
	@echo "${NAME} has been deleted"

re:	fclean	all
	@echo "All objects and ${NAME} have been deleted"
	@echo "Everything has been created again"

.PHONY:	all, clean, fclear, re