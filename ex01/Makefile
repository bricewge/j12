#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 09:48:23 by bwaegene          #+#    #+#              #
#    Updated: 2016/07/21 13:42:34 by bwaegene         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
CFLAGS = -Wall -Wextra -Werror -o $(NAME)
NAME = ft_cat

SOURCES = ft_putchar.c        \
		ft_putstr.c           \
		ft_strlen.c           \
		ft_cat.c
HEADERS = ft_cat.h

all: $(NAME)

$(NAME): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES)

.PHONY: clean

clean:
	/bin/rm -f

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
