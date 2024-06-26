/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   an_others_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:20:16 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/12 00:12:23 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	if_sorted(t_list	*lst)
{
	t_list	*sort;
	t_list	*sort_next;

	sort = lst;
	sort_next = lst->next;
	while (sort->next)
	{
		if (sort->value > sort_next->value)
			return (0);
		sort_next = sort_next->next;
		sort = sort->next;
	}
	return (1);
}

int	get_i(t_list *stack_a, int val)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		if (stack_a->value == val)
			return (i);
		i++;
		stack_a = stack_a->next;
	}
	return (-1);
}

void	back_to_a(t_list **stack_a, t_list **stack_b)
{
	int	max;
	int	len;
	int	index;

	len = ft_lstsize(*stack_b);
	max = max_number(*stack_b);
	index = get_i(*stack_b, max);
	while (len)
	{
		if ((*stack_b)->value == max)
		{
			pab(0, stack_a, stack_b);
			len--;
			max = max_number(*stack_b);
			index = get_i(*stack_b, max);
		}
		else if (index < len / 2)
			rab(NULL, stack_b);
		else
			rrab(NULL, stack_b);
	}
}
