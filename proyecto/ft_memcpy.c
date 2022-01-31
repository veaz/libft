/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 10:43:52 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/29 13:08:03 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{	
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;
	size_t			a;

	a = 0;
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (a < n)
	{
		ptrdest[a] = ptrsrc[a];
		a++;
	}
	return (dest);
}
