/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:43:39 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/19 12:23:39 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(){
     
	char	strncmp1[] = "abcdef";
	char	strncmp2[] = "abc\fdxx";
	printf("--strncmp--\n");
	printf("Parametros (abcdef, abc\fdxx)\n");
	printf("ft_strncmp = %d\n", ft_strncmp(strncmp1, strncmp2, 5));
	printf("strncmp = %d\n\n", strncmp(strncmp1, strncmp2, 5));
}
