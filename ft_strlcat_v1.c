/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_v1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:27:34 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/23 12:12:23 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
  
 size_t        ft_strlcat(char *dst, const char *src, size_t size) 
 { 
         size_t        slen; 
         size_t        dlen; 
         size_t        i; 
  
         slen = 0; 
         dlen = 0; 
         i = 0; 
         slen = ft_strlen(src); 
         if ((!dst && size == 0) || (dst == src)) 
                 return (slen); 
         dlen = ft_strlen(dst); 
         if (size <= dlen) 
                 slen += size; 
         else 
                 slen += dlen; 
         while (src[i] != '\0' && dlen + 1 < size) 
         { 
                 dst[dlen] = src[i]; 
                 dlen++; 
                 i++; 
         } 
         if (size > dlen) 
                 dst[dlen] = '\0'; 
         return (slen); 
 }
