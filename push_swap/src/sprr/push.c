/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:55:24 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/30 18:14:36 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push(t_list** stack_a, t_list** stack_b)
{
	int tmp;
	
	if (!*stack_b)
		return ;
	tmp = *stack_b->value;
	*stack_a->value = tmp;
}