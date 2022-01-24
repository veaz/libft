/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:27:25 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/23 13:43:50 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (haystack[0] == '\0' || len <= 0)
		return (NULL);
	while (x < len)
	{
		y = 0;
		while (needle[y] == haystack[x + y] && (x + y) < len)
		{
			if (needle[y + 1] == '\0')
				return ((char *)haystack + x);
			y++;
		}
		x++;
	}
	return (0);
}
