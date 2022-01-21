/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:03:24 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/19 13:21:37 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	x;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	x = 0;
	if (!s2)
		return (s1);
	while (x < len)
	{
		if (s1[x] == s2[x])
			return (s1 + x);
		x++;
	}
	return (NULL);
}
