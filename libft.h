/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:23:50 by gneve             #+#    #+#             */
/*   Updated: 2020/11/24 04:56:06 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
#include "stddef.h"
#include "unistd.h"
#include "stdlib.h"

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int 			ft_isalpha(char c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				t_isdigit(int c);
char			*ft_itoa(int n);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t len);
void 			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char const *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(char *src);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_strlen(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int 			ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char 			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int 			ft_toupper(int c);
int				ft_isalnum(int c);
int				ft_tolower(int c);
#endif
