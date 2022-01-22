/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:43:39 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/19 11:09:51 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(){
     
	//char	c1 = 'a';
	int		c2 = 128;
	printf("--toupper--\n");
	printf("Parametros (200)\n");
	printf("ft_toupper = %c\n", (char)ft_toupper(c2));
	printf("toupper = %c\n\n", (char)toupper(c2));
	printf("ft_toupper = %d\n", (int)ft_toupper(c2));
	printf("toupper = %d\n\n", (int)toupper(c2));
}
