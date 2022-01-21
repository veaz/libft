/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:18:15 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/19 11:24:46 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)s;
	len = ft_strlen(ptr);
	while (c >= 256)
		c = c - 256;
	while (len >= 0)
	{	
		if (ptr[len] == c)
			return (&ptr[len]);
		len--;
	}
	return (NULL);
}
