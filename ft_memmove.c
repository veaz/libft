/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:25:26 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/15 11:39:23 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memmove(char *dst, char *src, int len)
{
	int a;

	a = len;
	while (len >= 0)
	{
		*(dst + len) = *(src + len);
		len--;
	}
	*(dst + a) = '\0';
	return (dst);
}
