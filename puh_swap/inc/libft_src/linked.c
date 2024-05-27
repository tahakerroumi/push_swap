/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:56:13 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/26 13:13:59 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

t_list *ft_lstlast(t_list *lst)
{   
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst); 
}

t_list *ft_lstnew(long content)
{
       t_list*  ptr;
       
       ptr = (t_list*)malloc(sizeof(t_list));
       if (!ptr)
              return (free(ptr),NULL);
       ptr->content = content;
       ptr->next = NULL;
       return (ptr);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list* ptr;
	
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new;
	new->next = NULL;
}
