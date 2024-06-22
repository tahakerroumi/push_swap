/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:55:24 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/11 23:22:59 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	s(t_list **stack)
{
	t_list	*ptr;
	t_list	*ptr1;
	t_list	*ptr2;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	ptr = *stack;
	ptr1 = ptr->next;
	ptr2 = ptr->next->next;
	ptr->next = ptr2;
	ptr1->next = ptr;
	*stack = ptr1;
}

void	p(t_list **stack_src, t_list **stack_dest)
{
	t_list	*tmp;

	if (!stack_src || !*stack_src)
		return ;
	tmp = *stack_src;
	*stack_src = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_dest, tmp);
}

void	r(t_list **stack)
{
	t_list	*ptr;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	ptr = *stack;
	*stack = ptr->next;
	ptr->next = NULL;
	ft_lstadd_back(stack, ptr);
}

void	rr(t_list **stack)
{
	t_list	*ptr;
	t_list	*last;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	ptr = *stack;
	while (ptr->next->next)
		ptr = ptr->next;
	last = ft_lstlast(*stack);
	ptr->next = NULL;
	last->next = *stack;
	*stack = last;
}
