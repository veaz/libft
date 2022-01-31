/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 09:40:42 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/24 01:01:39 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start(char const *s1, char const *set, int lens1)
{
	int	x;

	x = 0;
	while (x < lens1)
	{
		if(ft_strchr(set, s1[x]) == NULL)
			break;
		x++;
	}
	return (x);
}

int	ft_end(char const *s1, char const *set, int len)
{
	int		x;
	char	*ptr;

	x = 0;
	while (len >= 0)
	{
		if(ptr[len] == (char *)NULL)
		{
			printf("%c no se encuentra en la cadena\n", s1[len]);
			break;
		}
		len--;
		x++;
		printf("Sumando x = %i\n", x);
	}
	printf("Va a retornar x = %i\n", x);
	if (x > 0)
		return (x - 1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		lens1;
	int		start;
	int		end;

	lens1 = ft_strlen(s1);
	ptr = malloc(lens1 + 1);
	if (!ptr)
		return (0);
	start =	ft_start(s1, set, lens1); //GOOD
	printf("Valor de lens1 pre  = %i\n", lens1);
	lens1 = ft_strlen(&s1[start]);
	printf("Valor de lens1 post  = %i\n", lens1);
	end = ft_end(s1, set, lens1);
	printf("Valor de end = %i\n", end);
	printf("Se va a restar = %i\n\n", lens1 - end + 1);
	ft_strlcpy(ptr, &s1[start], (lens1 - end) + 1);
	return (ptr);
}
