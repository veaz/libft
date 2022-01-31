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

    while(lst != NULL)
    {
        ft_lstadd_back(&newlist, f(lst->content));
        if (newlist == NULL)
            return (del(newlist))
        lst = lst->next;
    }
    return (newlist);
}