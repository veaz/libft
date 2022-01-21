/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:54:32 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/19 12:12:34 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(int c)
{
	char	caracter;

	caracter = (char)c;
	if (caracter >= 'a' && caracter <= 'z')
		caracter = caracter - 32;
	return (caracter);
}
