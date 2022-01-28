/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:17:52 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/28 14:19:05 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*ptr;
	size_t	lens;
	size_t	x;

	lens = ft_strlen(s);
	x = 0;
	if (!s)
		return (NULL);
	if (len > lens)
		len = lens;
	ptr = malloc(len + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	while (start < lens && x < len && s[start])
	{
		ptr[x] = s[start];
		x++;
		start++;
	}
	ptr[x] = '\0';
	return (ptr);
}
