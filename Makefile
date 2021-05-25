# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 21:23:40 by jfranchi          #+#    #+#              #
#    Updated: 2021/05/25 20:29:25 by jfranchi         ###   ########.fr        #
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
SRCS = ft_toupper.c ft_tolower.c

#Generate files .o for "all" rule
OBJS = $(SRCS:.c=.o)

 ###############################################################################
#																				#
#										RULES									#
#																				#
 ###############################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $@ ./*.o
	@echo "$(NAME) has been created successfully!"

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@
	@echo "Objects has been created successfully"

clean:
	@rm -vf *.o

fclean:	clean
	@rm -vf $(NAME)

re:	fclean	all

.PHONY:	all, clean, fclear, re