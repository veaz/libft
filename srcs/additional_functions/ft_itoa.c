/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:55:24 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/31 00:05:17 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int c)
{
	int	x;

	if (c < 0)
		x = 2;
	else
		x = 1;
	if (c > 0 && c < 10)
		return (1);
	while (c / 10 != 0)
	{
		c = c / 10;
		x++;
	}
	return (x);
}

static	char	*ft_minvalue(char *ptr)
{
	ptr = (char *)malloc((12) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';
	ptr[5] = '4';
	ptr[6] = '8';
	ptr[7] = '3';
	ptr[8] = '6';
	ptr[9] = '4';
	ptr[10] = '8';
	ptr[11] = '\0';
	return (ptr);
}

static char	*ft_malloclen(char *ptr, int len)
{
	ptr = (char *)malloc((len + 1) * sizeof(char));
	return (ptr);
}

static char	*ft_getvalue(char *ptr, int len, int c, int n)
{
	int	i;

	i = len;
	len = len -1;
	while (len >= c)
	{
		ptr[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	int		c;

	ptr = NULL;
	len = ft_intlen(n);
	c = 0;
	if (n == -2147483648)
	{
		ptr = ft_minvalue(ptr);
		return (ptr);
	}
	else
		ptr = ft_malloclen(ptr, len);
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		ptr[c] = '-';
		c++;
	}
	ft_getvalue(ptr, len, c, n);
	return (ptr);
}
