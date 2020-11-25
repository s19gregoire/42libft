/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 02:33:43 by gneve             #+#    #+#             */
/*   Updated: 2020/11/25 02:06:42 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int 	i;
	unsigned char	*d;
	unsigned char	*f;

	d = (unsigned char)s2;
	f = (unsigned char)s1;

	i = 0;
	if (n == 0)
		return (0);
	while (f[i] == d[i] && f[i] && d[i] && i < n - 1)
		i++;
	return ((int)(f[i] - d[i]));
}
