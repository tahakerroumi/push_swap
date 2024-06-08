/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:20:16 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/06 18:43:48 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	r_r(t_list **stack_a, t_list **stack_b)
{
	r(stack_b,2);
	r(stack_a,1);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	s(stack_b, 1);
	s(stack_a, 2);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rr(stack_b, 2);
	rr(stack_a, 1);
}