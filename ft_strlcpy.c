/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 02:35:15 by gneve             #+#    #+#             */
/*   Updated: 2020/11/22 03:59:56 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	count;

	if (size == 0)
		return (ft_strlen(src));
	count = 0;
	while (size > 1 && *src)
	{
		*dest = *src;
		++dest;
		++src;
		--size;
		++count;
	}
	*dest = '\0';
	while (*dest || *src)
	{
		if (*src)
		{
			++src;
			++count;
		}
	}
	return (count);
}
