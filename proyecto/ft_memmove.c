/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:25:26 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/29 13:14:45 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				a;
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	a = (int)len - 1;
	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (len > 0)
	{
		if (ptrsrc <= ptrdst)
		{
			while (a >= 0)
			{
				ptrdst[a] = ptrsrc[a];
				a--;
			}
		}
		else
			ft_memcpy(dst, src, len);
	}
	return (dst);
}
