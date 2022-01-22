/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:43:39 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/19 10:21:09 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(){
     
	char	strchr1[] = "teste";
	int		strchr2 = 1024;
	printf("--strchr--\n");
	printf("Parametros (teste, 'a')\n");
	printf("ft_strchr = %p\n", ft_strchr(strchr1, strchr2));
	printf("strchr = %p\n\n", strchr(strchr1, strchr2));
}
