/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:34:43 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/08 17:43:27 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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
	return (list);
}

t_list *list_create(char **list_arr)
{
	t_list	*list;
	t_list	*tmp;
	t_list	*head;
	int		i;

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

