/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:56:41 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/11 12:56:44 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	counter(char *ptr) //12
{
	int	c;

	c = 0;
	while (ptr[c] != '\0')
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size) //12
{
	unsigned int	a;
	int				b;
	int				c;
	int				retorno;

	a = 0;
	c = counter(src);
	b = counter(dest);
	b++;
	while (a < (size - 1))
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	retorno = b + c;
	return (retorno);
}
