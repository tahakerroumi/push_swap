/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 21:26:42 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/12 01:25:50 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list* ft_lstlast(t_list *lst)
{
    t_list *ptr;
    
    if (!lst)
        return (NULL);
    ptr = lst;
    while (ptr->next)
        ptr = ptr->next;
    return (ptr); 
}

