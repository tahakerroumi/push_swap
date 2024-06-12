/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:10:12 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/12 02:56:45 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void fivenfour(t_list** stack_a, t_list **stack_b)
{
	int	min;
	int	index;
	int	size;

	min = min_number(*stack_a);
	index = indeX(*stack_a, min);
	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		if (index == 0)
			pab(1, stack_a, stack_b);
		else if (size / 2 >= index)
			rab(stack_a, NULL);
		else if (size / 2 < index)
			rrab(stack_a, NULL);
		min = min_number(*stack_a);
		index = indeX(*stack_a, min);
		size = ft_lstsize(*stack_a);
	}
	three(stack_a);
	pab(0, stack_a, stack_b);
	pab(0, stack_a, stack_b);
}

void three(t_list** lst)
{
	int	max;

	max = max_number(*lst);
	if (max == (*lst)->value)
		rab(lst, NULL);
	else if (max == (*lst)->next->value)
		rrab(lst, NULL);
	if (!if_sorted(*lst))
		sab(lst, NULL);
}

void	push_swap(t_list** list, t_list** stack_b)
{
	int	len;

	len = ft_lstsize(*list); 
	if (len <= 3 && len > 1)
		three(list);
	else if (len > 3 && len <= 5)
		fivenfour(list,stack_b);
	else if (len <= 400)
	{
		sort_number(list, stack_b, array(list), 15);
		back_to_a(list, stack_b);
	}
	else
	{
		sort_number (list, stack_b, array(list), 30);
		back_to_a (list, stack_b);
	}
}
