# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gneve <gneve@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 03:10:16 by gneve             #+#    #+#              #
#    Updated: 2020/11/23 03:27:55 by gneve            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ${wildcard *.c}

OBJS = ${SRCS:.c=.o}

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

CC = gcc


%.o: %.c
	${CC} ${CFLAGS} -I include -c $^ -o $@

all: ${NAME}


${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

clean:
	RM *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re