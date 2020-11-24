/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 02:39:46 by gneve             #+#    #+#             */
/*   Updated: 2020/11/24 06:29:01 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int 		neg;
	int 		i;
	long int 	num;

	i = 0;
	neg = 1;
	num = 0;
	while ((str && str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg *= -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		if ((num = num * 10 + (str[i++] - 48)) < 0)
		{
			if (neg < 0)
				return (0);
			else
				return (1);
		}
	}
	return (num * neg);
}
