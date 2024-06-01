/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:34:43 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/01 13:04:43 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list* ft_lstlast(t_list *lst)
{   
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst); 
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	t_list* ptr;

	ptr = ft_lstlast(*lst);
	ptr->next = new;
	new->next = NULL;
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}

void	ft_lstclear(t_list **lst)
{
	t_list* current;
	t_list* nxt;
	
	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		nxt = current->next;
		free(current);
		current = nxt;
	}
	*lst = NULL;
}
t_list *list_new(int val, unsigned int index, t_list *next)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->index = index;
	list->value = val;
	list->next = next;

	return list;
}

t_list *list_create(char **list_arr)
{
	t_list *list, *tmp, *head;
	int i;

	i = 0;
	list = list_new(ft_atoi(list_arr[i]), i, NULL);
	if (!list)
		return (NULL);
	head = list;
	i++;
	while (list_arr[i])
	{
		tmp = list_new(atoi(list_arr[i]), i, NULL);
		if (!tmp)
			return (ft_lstclear(&head),NULL);
		list->next = tmp;
		list = tmp;
		i++;
	}
	return (head);
}

