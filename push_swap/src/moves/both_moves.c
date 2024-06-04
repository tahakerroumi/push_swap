/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:20:16 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/03 21:06:25 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	r_r(t_list **stack_a, t_list **stack_b)
{
	r(stack_b,2);
	r(stack_a,1);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	s(stack_b, 1);
	s(stack_a, 2);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rr(stack_b, 2);
	rr(stack_a, 1);
}