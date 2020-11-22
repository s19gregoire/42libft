/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:57:45 by gneve             #+#    #+#             */
/*   Updated: 2020/11/22 03:59:17 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	nn;

	nn = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			n = n + 1;
			nn = 1;
		}
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(((n + nn) % 10) + 48, fd);
	}
	else
	{
		ft_putchar_fd((n + nn) + 48, fd);
	}
}
