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

int	if_sorted(t_list* lst)
{
	t_list* sort;
	t_list* sort_next;

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

int	get_i(t_list *s_a, int val)
{
	int	i;

	i = 0;
	while (s_a)
	{
		if (s_a->value == val)
			return (i);
		i++;
		s_a = s_a->next;
	}
	return (-1);
}

void	back_to_a(t_list **s_a, t_list **s_b)
{
	int	max;
	int	len;
	int	index;

	len = ft_lstsize(*s_b);
	max = max_number(*s_b);
	index = get_i(*s_b, max);
	while (len)
	{
		if ((*s_b)->value == max)
		{
			pab(0, s_a, s_b);
			len--;
			max = max_number(*s_b);
			index = get_i(*s_b, max);
		}
		else if (index < len / 2)
			rab(NULL, s_b);
		else
			rrab(NULL, s_b);
	}
}