/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:20:16 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/01 16:20:45 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	r_r(t_list **stack_a, t_list **stack_b)
{
	r(stack_b);
	r(stack_a);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	s(stack_b);
	s(stack_a);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rr(stack_b);
	rr(stack_a);
}