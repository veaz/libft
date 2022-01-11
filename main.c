/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:43:39 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/11 17:47:45 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(){

	char	c = 'p'; //Caracter
	char	cadena[] = "123";
	char	lorem[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";

     
	printf("--isalpha --\nCaracter = %c\n", c); //1
	printf("ft_isalpha = %i\n", ft_isalpha(c));
	printf("isalpha = %i\n\n", isalpha(c));

	printf("--isdigit --\nCaracter = %c\n", c); //2
	printf("ft_isdigit = %i\n", ft_isdigit(c));
	printf("isdigit = %i\n\n", isdigit(c));

	printf("--isalnum--\nCaracter = %c\n", c); //3
	printf("ft_isalnum = %i\n", ft_isalnum(c));
	printf("isalnum = %i\n\n", isalnum(c));

	printf("--isasc--\nCaracter = %c\n", c); //4
	printf("ft_isascii = %i\n", ft_isascii(c));
	printf("isascii = %i\n\n", isascii(2));

	printf("--isprint--\nCaracter = %c\n", c); //5
	printf("ft_isprint = %i\n", ft_isprint(c));
	printf("isprint = %i\n\n", isprint(c));

	printf("--strlen--\nCadena = %s\n", cadena); //6
	printf("ft_strlen = %i\n", ft_strlen(cadena));
	printf("strlen = %lu\n\n", strlen(cadena));

	printf("--memset--\nCadena = %s\n", cadena); //7
	printf("ft_memset = %s\n", ft_memset(cadena, '*', 2));
	printf("memset = %s\n\n", memset(cadena, '*', 2));

	printf("--bzero--\nCadena = %s\n", lorem); //8
	printf("ft_bzero = %s\n", ft_bzero(lorem, sizeof(lorem)));
	printf("bzero = %s \n", bzero(lorem, sizeof(lorem)));
	printf("lorem = %s\n\n", lorem);

	printf("--memcpy--\n");




}
