/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_to_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:40:02 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/12 00:52:41 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	max_number(t_list* lst)
{
	int		max;

	if (!lst)
		return (0);
	max = (lst)->value;
	while (lst)
	{
		if (max < lst->value)
			max = lst->value;
		lst = lst->next;
	}
	return (max);
}

int	min_number(t_list* lst)
{
	int		min;

	if (!lst)
		return (0);
	min = lst->value;
	while (lst)
	{
		if (min > lst->value)
			min = lst->value;
		lst = lst->next;
	}
	return (min);
}

int	indeX(t_list* list, int min)
{
	int index;
	
	index = 0;
	while (list)
	{
		if (min == list->value)
			return (index);
		list = list->next;
		index++;
	}
	return (index);
}

void	sortarray(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		while (i && i < len && arr[i - 1] > arr[i])
		{
			swap(&arr[i - 1], &arr[i]);
			i--;
		}
		i++;
	}
}

int	*array(t_list** stack)
{
	int 	i;
	int 	*arr;
	t_list* ptr;

	i = 0;
	arr = malloc(ft_lstsize(*stack) * sizeof(int));
	if (!arr)
		return (NULL);
	ptr = *stack;
	while (ptr)
	{
		arr[i] = ptr->value;
		i++;
		ptr = ptr->next;
	}
	sortarray(arr, ft_lstsize(*stack));
	return (arr);
}