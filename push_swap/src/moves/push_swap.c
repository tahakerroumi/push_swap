/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:10:12 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/08 16:33:00 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void fivenfour(t_list** stack_a, t_list **stack_b)
{
	int	min;
	int index;
	int size;

	min = min_number(*stack_a);
	index = indeX(*stack_a, min);
	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		if (index == 0)
			p(stack_a, stack_b, 2);
		else if (size / 2 >= index)
			r(stack_a, 1);
		else if (size / 2 < index)
			rr(stack_a, 1);
		min = min_number(*stack_a);
		index = indeX(*stack_a, min);
		size = ft_lstsize(*stack_a);
	}
	three(stack_a);
	p(stack_b, stack_a, 1);
	p(stack_b, stack_a, 1);
}

void three(t_list** lst)
{
	int max;

	max = max_number(*lst);
	if (max == (*lst)->value)
		r(lst, 1);
	else if (max == (*lst)->next->value)
		rr(lst, 1);
	if ((*lst)->value > (*lst)->next->value)
		s(lst, 1);
}

int	if_sorted(t_list** lst)
{
	t_list* sort;
	t_list* sort_next;

	sort = *lst;
	sort_next = (*lst)->next;
	while (sort->next)
	{
		if (sort->value > sort_next->value)
			return (0);
		sort_next = sort_next->next;
		sort = sort->next;
	}
	return (1);
}

void	push_swap(t_list** list, t_list** stack_b)
{
	int	len;

	len = ft_lstsize(*list); 
	if (len <= 3 && len > 1)
		three(list);
	else if (len > 3 && len <= 5)
		fivenfour(list,stack_b);
}
