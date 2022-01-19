/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:17:52 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/19 09:18:24 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*ptr;
	int		reallen;

	if (start > 0)
		return (ptr[start]);
	else
	{
		reallen = (ft_strlen(s) - 1);
		return (reallen - len);
	}
}
