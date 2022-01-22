/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:43:39 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/19 13:00:01 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(){
     
	char	memcmp1[] = {-128, 0, 127, 0};
	char	memcmp2[] = {0, 0 , 127, 0};
	char	*ptr1;
	char	*ptr2;

	ptr1 = memcmp1;
	ptr2 = memcmp2;
	printf("--memcmp--\n");
	printf("Parametros %s, %s\n", memcmp1, memcmp2);
	printf("ft_memcmp = %d\n", ft_memcmp(ptr1, ptr2, 5));
	printf("memcmp = %d\n\n", memcmp(ptr1, ptr2, 5));
}
