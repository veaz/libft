/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:54:51 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/11 13:09:18 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_memset(char *str, char c, int n) //7 ?? RECIBE INT, PARA CAMBIAR POR UNSIGNED CHAR
{
	while (n >= 0)
	{
		*(str + n) = c;
		n--;
	}
	return (str);
}
