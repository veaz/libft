/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:24:16 by vaguilar          #+#    #+#             */
/*   Updated: 2022/01/31 11:24:19 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newlist;
    t_list  *temp;

    if (!lst || !f)
	    return (NULL);
    newlist = ft_lstnew(f(lst->content));
    if (!newlist)
      return (NULL);
    temp = newlist;
    lst = lst->next;
  while(lst != NULL)
    {
        temp->next = ft_lstnew(f(lst->content));
        if (!temp)
        {
          ft_lstclear(&temp, del);
          return (NULL);
        }
        lst = lst->next;
    }
    return (newlist);
}
