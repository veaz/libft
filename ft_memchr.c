/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:05:14 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/18 09:52:33 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;
	char	*ptr;

	x = 0;
	ptr = (char *)s;
	while (x <= n)
	{	
		if (*(ptr + x) == c)
			return (ptr + x);
		x++;
	}
	return (NULL);
}
