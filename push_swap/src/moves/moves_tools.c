/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 23:11:38 by ta7ino            #+#    #+#             */
/*   Updated: 2024/06/11 23:58:43 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sab(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
		ft_printf("ss\n");
	else if (stack_a && !stack_b)
		ft_printf("sa\n");
	else if (!stack_a && stack_b)
		ft_printf("sb\n");
	s(stack_a);
	s(stack_b);
}

void	pab(int i, t_list **stack_a, t_list **stack_b)
{
	if (i)
	{
		ft_printf("pb\n");
		p(stack_a, stack_b);
	}
	else
	{
		ft_printf("pa\n");
		p(stack_b, stack_a);
	}
}

void	rab(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
		ft_printf("rr\n");
	else if (stack_a && !stack_b)
		ft_printf("ra\n");
	else if (!stack_a && stack_b)
		ft_printf("rb\n");
	r(stack_a);
	r(stack_b);
}

void	rrab(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
		ft_printf("rrr\n");
	else if (stack_a && !stack_b)
		ft_printf("rra\n");
	else if (!stack_a && stack_b)
		ft_printf("rrb\n");
	rr(stack_a);
	rr(stack_b);
}