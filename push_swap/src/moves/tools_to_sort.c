/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_to_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:40:02 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/03 21:21:44 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	max_number(t_list** lst)
{
	int		max;
	t_list* first;

	max = (*lst)->value;
	first = *lst;
	while (first)
	{
		if (max <= first->value)
			max = first->value;
		first = first->next;
	}
	return (max);
}

int	min_number(t_list** lst)
{
	int		min;
	t_list* first;

	min = (*lst)->value;
	first = *lst;
	while (first)
	{
		if (min >= first->value)
			min = first->value;
		first = first->next;
	}
	return (min);
}