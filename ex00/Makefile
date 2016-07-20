#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 09:48:23 by bwaegene          #+#    #+#              #
#    Updated: 2016/07/20 16:20:23 by bwaegene         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
CFLAGS = -Wall -Wextra -Werror -o $(NAME)
NAME = ft_display_file

SOURCES = ft_putchar.c        \
		ft_putstr.c           \
		ft_display_file.c
HEADERS = ft_display_file.h

all: $(NAME)

$(NAME): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES)

.PHONY: clean

clean:
	/bin/rm -f

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
