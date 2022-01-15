/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:58:42 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/15 18:31:44 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>//DELETE - FUNTIONS ORIGINALS
#include <string.h>
#include <unistd.h> //INNECESARIA?
#include <stdio.h> //DELETE

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_strlen(const char *s);

char	*ft_memset(char *b, int c, int len);

char	*ft_bzero(char *s, size_t n);

char	*ft_memcpy(char *dst, char *src, int n);

char	*ft_memmove(char *dst, char *src, int len);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	ft_strlcat(char *dst, char *src,int dstsize);

char	ft_toupper(int c);

char	ft_tolower(int c);

char	*ft_strchr(char *s, int c);

char	*ft_strrchr(char *s, int c);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_memchr(char *s, int c, int n);

int		ft_memcmp(char *s1, char *s2, unsigned int n);
