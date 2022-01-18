/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:18:15 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/18 09:41:17 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)s;
	len = ft_strlen(ptr);
	while (len >= 0)
	{	
		if (ptr[len] == c)
			return (&ptr[len]);
		len--;
	}
	return (ptr);
}
