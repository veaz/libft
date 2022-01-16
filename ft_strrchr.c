/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:18:15 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/15 15:07:58 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

char	*ft_strrchr(char *s, int c)
{
	int	x;
	char *ptr;

	(void)c;
	x = ft_strlen(s);
	ptr = s;
	while (x > 0)
	{	
		if (ptr[x] == '.')
			return (&ptr[x]);
		x--;
	}
	return (ptr);
}
