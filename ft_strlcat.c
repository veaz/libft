/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:56:41 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/18 13:57:47 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	int		lendst;
	int		lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	len = lendst + lensrc;
	ft_strlcpy(dst, src, dstsize);
	if (dstsize == 0)
		return (lensrc);
	return (len);
}
