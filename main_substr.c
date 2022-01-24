/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:23:55 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/23 17:34:21 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	printf("----substr----\n");
	char * s = ft_substr("tripouille", 0, 42000);
	printf("Retorno 0 = %s\n", s);

	s = ft_substr("tripouille", 1, 1);
	printf("Retorno 1 = %s\n", s);

	s = ft_substr("tripouille", 100, 1);
	printf("Retorno 2 = %s\n", s);

	char * str = strdup("1");
	s = ft_substr(str, 42, 42000000);
	printf("Retorno 3 = %s\n", s);

	str = strdup("0123456789");
	s = ft_substr(str, 9, 10);
	printf("Retorno 4 = %s\n", s);

	s = ft_substr("42", 0, 0);
	printf("Retorno 5 = %s\n", s);

	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
	printf("Retorno 6 = %s\n", s);

	s = ft_substr("test", 1, 2);
	printf("Retorno 7 = %s\n", s);

	s = ft_substr("", 0, 0);
	printf("Retorno extra 1 = %s\n", s);
	printf("size of %lu\n", sizeof(s));
}
