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

void		*ft_memset(void *s, int c, size_t len);

void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *dest, const void *src, size_t n);

void		*ft_memmove(void *dest, const void *src, size_t len);

size_t		ft_strlcpy(char *dst, const char *src, size_t size);

size_t		ft_strlcat(char *dst, const char *src, size_t size);

char	ft_toupper(int c);

char	ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(char *s, int c);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_memchr(char *s, int c, int n);

int		ft_memcmp(char *s1, char *s2, unsigned int n);

int		ft_atoi(char *str);
