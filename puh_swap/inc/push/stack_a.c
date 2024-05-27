/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <tkerroum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:34:43 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/27 10:17:15 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

// void	check_dup_num(t_list* p)
// {
	
// }

void free_double(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

t_list*	fill_stack(char *s)
{
	char	**str;
	t_list	*ptr;
	long	number;
	int		i;
		
	i = 0;
	ptr = NULL;
	str = ft_split(s, ' ');
	if (!str || !str[i])
		error(s);
	while (str[i])
	{
		number = ft_atoi(str[i]);
		if (number == 21474836484)
		{
			free_double(str);
			error(s);
		}
		ft_lstadd_back(&ptr, ft_lstnew(number));
		i++;
	}
	// check_dup_num(ptr);
	free_double(str);
	return (ptr);
}
