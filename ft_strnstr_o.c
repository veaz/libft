/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:03:24 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/23 13:26:59 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	z;

	x = 0;
	y = 0;
	z = 0;
	if (!*needle)
		return ((char *)haystack);
	while (x < len && haystack[x] != '\0')
	{
		printf("h = %c || n = %c\n", haystack[x], needle[y]);
		while (haystack[x] == needle[y] && x < len)
		{
			if (y == 0)
				z = x;
			if (lenneedle == y)
				return ((char *)&haystack[z]);
			
			x++;
			y++;
			printf("Contando x BUCLE BUCLE\n");
		}
			if (y > 0)
			{
				y = 0;
				x++;
			}
			else
				x++;
			printf("contando x\n");
	}
	printf("VALOR X = %zu\n", x);
	return (0);
}
