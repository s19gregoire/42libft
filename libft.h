/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:23:50 by gneve             #+#    #+#             */
/*   Updated: 2020/11/22 03:57:17 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

#include "stddef.h";
#include "unistd.h";
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
#endif