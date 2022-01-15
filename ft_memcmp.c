/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:02:56 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/15 18:44:51 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(char *s1, char *s2, unsigned int n)
{
	int	count;

	count = 0;

	while (n > 0)
	{
		//if (*(s1 + (count + 0)) != *(s2 +(count + 0)) && *(s1 + (count + 1)) != *(s2 + (count + 1))
		//		&& *(s1 + (count + 2) !=  *(s2 + (count + 2)) && *(s1 + (count + 3)) != *(s2 + (count + 3)))) 
		//	return (4);


		if ((s1[count + 0]) != (s2[count + 0]) && (s1[count + 1]) != (s2[count + 1])
				&& (s1[count + 2] !=  (s2[count + 2]) && (s1[count + 3]) != (s2[count + 3]))) 
			return (4);

		//if (*s1 != *s2)
		//	return (*s1 - *s2);
		//if (*s1 == '\0')
		//	return (0);
		//s1++;
		//s2++;
		count = count + 4;
		n = n - 4;
	}
	return (0);
}
