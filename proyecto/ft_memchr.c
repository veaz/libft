/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:05:14 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/19 12:07:11 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*ptr;
	unsigned char	caracter;

	x = 0;
	ptr = (unsigned char *)s;
	caracter = (unsigned char)c;
	while (x < n)
	{	
		if (*(ptr + x) == caracter)
			return (ptr + x);
		x++;
	}
	return (NULL);
}
