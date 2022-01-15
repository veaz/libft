/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:05:14 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/15 17:15:13 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memchr(char *s, int c, int n)
{
	int	x;
	char *ptr;

	x = 0;
	ptr = s;
	while (x <= n)
	{	
		if (*(ptr + x) == c)
			return (ptr + x);
		x++;;
	}
	return (ptr);
}
