/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:55:50 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/15 12:11:18 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	pos;

	i = 0;
	pos = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while (src[pos] != '\0' && pos < (size - 1))
		{
			dest[pos] = src[pos];
			pos++;
		}
		dest[pos] = '\0';
	}
	return (i);
}
