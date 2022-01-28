/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:55:24 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/28 10:12:54 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int c)
{
	int	x;

	x = 1;
	if (c > 0 && c < 10)
		return (1);
	while(c /= 10)
		x++;
	return (x);	
}

char	*ft_itoa(int n)
{
	//char	*ptr;
	//char	res[100];
	char	*rmal;
	int	x;
	int	i;
	int	c;

	//ptr = res;
	x = ft_intlen(n);
	c = 0;
	//printf("Estoy recibiendo int = %i\n", n);
	//printf("%i tiene %i caracteres\n", n, x);
	rmal = (char *)malloc(x * sizeof(char));
	if (n < 0)
	{
		n = n * -1;
		//res[c] = '-';
		rmal[c] = '-';
		c++;
		x++;
	}
	i = x;
	x = x -1;
	while (x >= c)
	{
		//printf("res[i] pre = %c\n", res[i]);
		//car = (n % 10) + 48;
		//printf("CARACTER CONVERTIDO = %c\n", car);
		////res[x] = n % 10 + 48;
		//printf("res[i] = %c\n", res[i]);
		rmal[x] = n % 10 + 48;
		n = n / 10;
		x--;
	}
	//printf("Valor de i = %i\n", i);
	//res[i] = '\0';
	rmal[i] = '\0';
	//printf("\n\nPRUEBA DE RESULTADO = %s\n\n", rmal);
	//n = n - 10;
	//printf("El valor de n = %i\n", n);
	return (rmal);
}
