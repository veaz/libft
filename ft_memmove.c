/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:25:26 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/18 12:01:04 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	a;
	char	*ptrdest;
	char	*ptrsrc;

	a = 0;
	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	while (a < len)
	{
		*(ptrdest + a) = *(ptrsrc + a);
		a++;
	}
	return (dest);
}
