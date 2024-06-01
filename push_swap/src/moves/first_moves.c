/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:55:24 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/01 16:01:47 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	s(t_list* swap)
{
	int tmp;

	if (ft_lstsize(swap) > 1)
	{
		tmp = swap->value;
		swap->value = swap->next->value;
		swap->next->value = tmp; 
	}
}

void	p(t_list** stack_src, t_list** stack_dest)
{
	t_list* tmp;

	if (!(*stack_src))
		return ;
	tmp = (*stack_src);
	(*stack_src) = (*stack_src)->next;
	tmp->next = (*stack_dest);
	(*stack_dest) = tmp;
}
void	r(t_list** stack)
{
	t_list* first;
	t_list* last;

	if (ft_lstsize(*stack) > 1)
	{
		first = *stack;
		last = ft_lstlast((*stack));
		*stack = (*stack)->next;
		last->next = first;
		first->next = NULL; 
	}
}
void	rr(t_list** stack)
{
	t_list* first;
	t_list* last;

	if (ft_lstsize(*stack) > 1)
	{
		first = *stack;
		last = ft_lstlast(*stack);
		while(first)
		{
			if (first->next->next == NULL)
			{
				first->next = NULL;
				break;
			}
			first = first->next;
		}
		ft_lstadd_front(stack, last);
	}
}
