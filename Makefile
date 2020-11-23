# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gneve <gneve@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 03:10:16 by gneve             #+#    #+#              #
#    Updated: 2020/11/23 05:20:33 by gneve            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

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
	 rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re