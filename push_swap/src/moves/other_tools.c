/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 21:53:28 by ta7ino            #+#    #+#             */
/*   Updated: 2024/06/11 23:57:46 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap(int *a, int *b)
{
	int	c;

	c = a[0];
	a[0] = b[0];
	b[0] = c;
}

int	find(int num, int *arr, int lenght)
{
	int	i;

	i = 0;
	while (i < lenght)
	{
		if (num == arr[i])
			return (i);
		i++;
	}
	return (0);
}

void	change_index(t_list **stack, int *arr)
{
	t_list	*ptr;
	int		len;

	ptr = *stack;
	len = ft_lstsize(*stack);
	while (ptr)
	{
		ptr->index = find(ptr->value, arr, len);
		ptr = ptr->next;
	}
}

int	find_index(t_list *stack, int x, int div)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->index <= x || stack->index <= x + div)
			break ;
		i++;
		stack = stack->next;
	}
	return (i);
}

void	sort_number(t_list **stack_a, t_list **stack_b, int *arr, int div)
{
	int	len;
	int	i;

	i = 0;
	len = ft_lstsize(*stack_a);
	change_index(stack_a, arr);
	while (i < len)
	{
		if ((*stack_a)->index <= i)
		{
			pab(1, stack_a, stack_b);
			rab(NULL, stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + div)
		{
			pab(1, stack_a, stack_b);
			i++;
		}
		else if (find_index(*stack_a, i, div) < ft_lstsize(*stack_a) / 2)
			rab(stack_a, NULL);
		else
			rrab(stack_a, NULL);
	}
	free(arr);
}
