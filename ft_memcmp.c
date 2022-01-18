/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:02:56 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/18 10:50:23 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	count;
	char	*ptrs1;
	char	*ptrs2;

	count = 0;
	ptrs1 = (char *)s1;
	ptrs2 = (char *)s2;
	while (count < n)
	{
		if (ptrs1[count] > ptrs2[count])
			return (ptrs1[count] - ptrs2[count]);
		else if (ptrs1[count] < ptrs2[count])
			return ((ptrs1[count] - ptrs2[count]));
		count++;
	}
	return (0);
}
