/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:56:41 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/22 18:11:42 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	lendst;
	size_t	lensrc;
	size_t	x;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	len = lendst + lensrc;
	x = 0;
	if (lendst < dstsize - 1 && dstsize > 0)
	{
		while (x <= lensrc && dstsize > 0) 
		{
			dst[lendst + x] = src[x];
			x++;
			dstsize--;
		}
	}
	if (lendst > dstsize)
		return (lendst + lensrc);
	return (len);
}
