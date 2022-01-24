/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 09:40:42 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/24 11:31:39 by vaguilar         ###   ########.fr       */
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
	int	x;
	//printf("entre a ft_end valor len = %i\n", len);
	x = len - 1;
	while (x >= 0)
	{
		if(ft_strrchr(set, s1[x]) == NULL)
			break;
		x--;
	}
	return (x);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		lens1;
	int		start;
	int		end;

	lens1 = ft_strlen(s1);
	start =	ft_start(s1, set, lens1); //GOOD
	end = ft_end(s1 + start, set, lens1 - start) + 1;
	//if (end > 0)
	//{
	//	printf("Se van a copiar %i caracteres\n", end);
	//}
	//else
	//	end = 0;
	//printf("\nRESULTADO CON CARACTERES CORTADOS = %s\n", ft_substr(s1, start, end));
	//ptr = ft_strdup(&s1[start]);
	ptr = (char *)malloc(((lens1 - start - end) + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr = ft_substr(s1, start, end);
	return (ptr);
}
