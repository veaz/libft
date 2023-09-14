/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:03:24 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/23 13:51:39 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	z;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (haystack[0] == '\0' || len <= 0)
		return (NULL);
	while (x < len && haystack[x] != '\0')
	{
		y = 0;
		z = 0;
		while (haystack[x + y] == needle[y]
			&& (x + y) < len && haystack[x + y] != '\0')
		{
			z = x;
			y++;
		}
		if ((size_t)ft_strlen(needle) == y)
			return ((char *)haystack + z);
		x++;
	}
	return (0);
}
