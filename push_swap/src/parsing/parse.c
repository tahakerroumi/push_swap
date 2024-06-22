/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 21:26:42 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/12 01:25:50 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}

int	if_error_check(char **str_arr)
{
	int	i;

	if (!str_arr)
		return (0);
	i = 0;
	while (str_arr[i])
	{
		if (check_no_digit(str_arr[i]) || check_int_min_max(str_arr[i]))
		{
			free_double(str_arr);
			return (0);
		}
		i++;
	}
	return (1);
}
