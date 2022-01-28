/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 10:43:52 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/28 10:43:27 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{	
	char	*ptrdest;
	char	*ptrsrc;
	size_t	a;

	a = 0;
	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	while (a < n)
	{
		*(ptrdest + a) = *(ptrsrc + a);
		a++;
	}
	return (dest);
}
