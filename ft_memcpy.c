/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 04:40:10 by neve              #+#    #+#             */
/*   Updated: 2020/11/24 04:35:09 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			m;

	if (dest == src)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	m = n;
	while (n--)
		d[n] = s[n];
	d[m] = 0;
	return (dest);
}
