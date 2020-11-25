/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 02:40:38 by gneve             #+#    #+#             */
/*   Updated: 2020/11/24 07:07:25 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	rsize;

	rsize = nmemb * size;
	if (!(result = malloc(rsize)))
		return (NULL);
	ft_bzero(result, rsize);
	return (result);
}
