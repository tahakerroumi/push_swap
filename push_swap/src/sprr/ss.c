/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:30:20 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/30 17:56:10 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap(t_list**	node)
{
	if (!*node || !*node->next)
		return ;
	t_list* first_node = *node;
    t_list* second_node = (*node)->next;
    int temp = first_node->value;
    first_node->value = second_node->value;
    second_node->value = temp;
}

void    sa(t_list* stack_a)
{
    swap(&stack_a);
    ft_printf("sa\n");
}

void    sb(t_list* stack_b)
{
    swap(&stack_b);
    ft_printf("sb\n");
}

void    ss(t_list* stack_a, t_list* stack_b)
{
    sa(stack_a);
    sb(stack_b);
}

