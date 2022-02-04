/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:44:55 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/23 18:48:46 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	j = lendst;
	i = 0;
	if (lendst < dstsize - 1 && dstsize > 0)
	{
		while (src[i] != '\0' && lendst + i < dstsize - 1)
		{
		dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (lendst > dstsize)
		lendst = dstsize;
	return (lendst + lensrc);
}
