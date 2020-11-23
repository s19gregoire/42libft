/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:33:11 by gneve             #+#    #+#             */
/*   Updated: 2020/11/23 03:39:21 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lenght(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char					*ft_itoa(int n)
{
	char			*ret;
	unsigned char	is_negative;
	unsigned char	len;
	unsigned int	un;

	is_negative = n < 0;
	un = is_negative ? -n : n;
	len = lenght(un) + is_negative;
	if (!(ret = malloc(len + 1)))
		return (NULL);
	ret[len] = '\0';
	while (len--)
	{
		ret[len] = un % 10 + '0';
		un /= 10;
	}
	if (is_negative)
		ret[0] = '-';
	return (ret);
}
