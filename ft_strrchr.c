/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 04:48:15 by gneve             #+#    #+#             */
/*   Updated: 2020/11/24 04:43:48 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*lastoc;

	lastoc = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			lastoc = (char *)&s[i];
		}
		i++;
	}
	if ((char)c == s[i])
	{
		return ((char *)&s[i]);
	}
	return (lastoc);
}
