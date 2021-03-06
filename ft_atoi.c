/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:41:15 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/30 22:01:19 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	sig;
	int	num;

	x = 0;
	sig = 1;
	num = 0;
	while (str[x] == ' ' || (str[x] >= '\t' && str[x] <= '\r'))
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			sig = sig * -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		num = (str[x] - '0') + (num * 10);
		x++;
	}
	return (num * sig);
}
