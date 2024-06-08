/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_to_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:40:02 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/06 19:53:18 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	max_number(t_list* lst)
{
	int		max;

	max = (lst)->value;
	while (lst)
	{
		if (max <= lst->value)
			max = lst->value;
		lst = lst->next;
	}
	return (max);
}

int	min_number(t_list* lst)
{
	int		min;

	min = lst->value;
	while (lst)
	{
		if (min >= lst->value)
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
		if (list->value == min)
			return (index);
		index++;
		list = list->next;
	}
	return (index);
}