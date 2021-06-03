# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 21:23:40 by jfranchi          #+#    #+#              #
#    Updated: 2021/06/03 14:42:20 by jfranchi         ###   ########.fr        #
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
SRCS =	ft_toupper.c ft_tolower.c ft_isprint.c ft_isascii.c \
	ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_calloc.c ft_memchr.c ft_memcmp.c ft_strlen.c \
	ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
	

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

clean:
	@rm -vf *.o

fclean:	clean
	@rm -vf $(NAME)
	@rm -vf libft.so

re:	fclean	all

so:
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY:	all, clean, fclear, re, so