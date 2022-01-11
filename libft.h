/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:58:42 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/11 13:11:59 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>//DELETE
#include <string.h>
#include <unistd.h> //INNECESARIA?
#include <stdio.h> //DELETE

int		ft_isalpha(unsigned char c);

int		ft_isdigit(unsigned char c);

int		ft_isalnum(char c);

int		ft_isascii(char c);

int		ft_isprint(unsigned char c);

int		ft_strlen(const char *str);

char	*ft_memset(char *str, char c, int n);

char	*ft_bzero(char *str, int n);
