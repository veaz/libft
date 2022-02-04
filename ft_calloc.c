/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:17:09 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/28 14:38:45 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	totalsize;

	totalsize = count * size;
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	else
	{
		ft_bzero(ptr, totalsize);
		return (ptr);
	}
}
