/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:43:39 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/22 20:12:53 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(){
     
	char	strnstr1[] = "aaabcabcd";
	char	strnstr2[] = "aabc";
	size_t n = 9;
	printf("--strnstr--\n");
	printf("Parametros (%s, %s, %zu)\n", strnstr1, strnstr2, n);
	printf("ft_strnstr = %s\n", ft_strnstr(strnstr1, strnstr2, n));
	printf("strnstr = %s\n\n", strnstr(strnstr1, strnstr2, n));
	//printf("ft_strnstr nulo = %p\n", ft_strnstr(strnstr1, "abcd", n));
	//printf("strnstr nulo = %p\n\n", strnstr(strnstr1, "abcd", 9));
}
