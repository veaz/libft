/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_v1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:27:25 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/23 12:30:08 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
  
 char        *ft_strnstr(const char *haystack, const char *needle, size_t len) 
 { 
         size_t i; 
         size_t j; 
  
         if (!*needle) 
                 return ((char *)haystack); 
         if (!haystack && len == 0) 
                 return (NULL); 
         i = 0; 
         while (i < len) 
         { 
                 j = 0; 
                 while (needle[j] == haystack[i + j] && (i + j) < len) 
                 { 
                         if (needle[j + 1] == '\0') 
                                 return ((char*)haystack + i); 
                         j++; 
                 } 
                 i++; 
         } 
         return (0); 
 }
