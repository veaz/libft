/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:25:26 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/18 12:49:10 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int				a;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	a = (int)len - 1;
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (len)
	{
		if (ptrsrc <= ptrdest)
		{
			while (a >= 0)
			{
				*(ptrdest + a) = *(ptrsrc + a);
				a--;
			}
		}
		else
			ft_memcpy(dest, src, len);
	}
	return (dest);
}
