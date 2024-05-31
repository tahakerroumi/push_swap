/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:55:24 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/31 18:23:40 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push(t_list **add, t_list **remove, int i)
{
	t_list	*tmp;

	if (!remove || !*remove)
		return ;
	tmp = *remove;
	*remove = (*remove)->next;
	tmp->next = NULL;
	ft_lstadd_front(add, tmp);
	if (i == 0)
		write(1, "pa\n", 3);
	else
		write(1, "pb\n", 3);
}


void rotate(t_list** stack, int i) {
    t_list* first;
    t_list* second;
    t_list* last;

    // Check if the stack has fewer than two elements
    if (!stack || !(*stack) || !(*stack)->next) {
        return;
    }

    first = *stack;
    second = first->next;
    last = ft_lstlast(*stack);

    // Set the new head of the stack
    *stack = second;

    // Move the first node to the end of the stack
    last->next = first;
    first->next = NULL;
	if (i == 1)
		ft_printf("ra\n");
	else 
		ft_printf("rb\n");
}