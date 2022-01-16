/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:56:41 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/15 13:46:18 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //DELETE

int	counter(char *ptr)
{
	int	c;

	c = 0;
	while (ptr[c] != '\0')
	{
		c++;
	}
	return (c);
}

int	ft_strlcat(char *dst, char *src, int dstsize)
{
	int	srcsize;
	int	count;
	//int	countsrc;
	//int	countdst;

	srcsize = counter(src);
	//countsrc = srcsize;
	//countdst = dstsize;
	count = 1;
	
	while (count <= 5)
	{
		//*(dst + (dstsize + count)) = *(src + count);
		//dst[dstsize + count] = src[count];
		*(dst + (dstsize + count)) = 'P'; //NO SE QUIERE AGREGAR MAS DEL TAMANO DE DST
		count++;
	}
	
	printf("CADENA DST = %s\n", dst);


	return (dstsize + srcsize);

}
