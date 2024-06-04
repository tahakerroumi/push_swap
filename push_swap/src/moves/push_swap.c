/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:10:12 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/04 02:15:12 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void four(t_list** lst)
{
    int min;
    t_list* tmp;
    t_list* b;
    
    min = min_number(lst);
    b = NULL;
    tmp = *lst;
    while (*lst)
    {
        if ((*lst)->value == min)
        {
			ft_printf("%d\n",(*lst)->value);
            p(lst, &b, 2);
			// ft_printf("%d\n",(*lst)->value);
			// exit(1);
            break;
        }
        *lst = (*lst)->next;
    }
	// ft_printf("%d\n",(*lst)->value);
	*lst = tmp;
    three(&tmp);
	// *lst = tmp;
    p(&b, lst, 1);
	// ft_printf("%d\n%d\n%d\n%d\n",(*lst)->value,(*lst)->next->value,(*lst)->next->next->value,(*lst)->next->next->next->value);
}

void three(t_list** lst)
{
    int max;
    t_list* first;

    if (!lst || !*lst || !(*lst)->next || !(*lst)->next->next)
        return;  
    max = max_number(lst);
    first = *lst;

    if (first->value == max)
        r(lst, 1);
    else if (first->next->value == max)
        rr(lst, 1);
    if (!if_sorted(lst))
        s(*lst, 1);
}

int	if_sorted(t_list** lst)
{
	t_list* sort;
	t_list* sort_next;

	sort = *lst;
	sort_next = (*lst)->next;
	while (sort->next)
	{
		if (sort->value > sort_next->value)
			return (0);
		sort_next = sort_next->next;
		sort = sort->next;
	}
	return (1);
}

void	push_swap(t_list** list)
{
	if (if_sorted(list))
		return ;
	else
	{
		if (ft_lstsize(*list) == 2)
			s(*list, 1);
		else if (ft_lstsize(*list) == 3)
			three(list);
		else if (ft_lstsize(*list) == 4)
			four(list);
	}
}