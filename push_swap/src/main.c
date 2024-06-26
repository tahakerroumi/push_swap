/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ta7ino <ta7ino@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 00:21:35 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/12 03:03:08 by ta7ino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	free_double(char **ptr)
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

size_t	get_av_len(char **av)
{
	int		i;
	int		len;

	i = 1;
	len = 0;
	while (av[i])
	{
		len += ft_strlen(av[i]);
		i++;
	}
	return (len + i - 2);
}

char	*av_join(char **av)
{
	char	*str;
	int		i;
	int		y;
	int		j;
	size_t	len;

	i = 1;
	y = 0;
	len = get_av_len(av);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
			str[y++] = av[i][j++];
		str[y++] = ' ';
		i++;
	}
	str[--y] = '\0';
	return (str);
}

t_list	*list_parse(char **av)
{
	char	*str;
	char	**str_arr;
	int		i;
	t_list	*list;

	if (check_digit(av))
		error();
	i = 0;
	str = av_join(av);
	str_arr = ft_split(str, ' ');
	free(str);
	if (!if_error_check(str_arr))
		error();
	list = list_create(str_arr);
	if (!list)
		ft_lstclear(&list);
	free_double(str_arr);
	return (list);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac > 1)
	{
		stack_b = NULL;
		stack_a = list_parse(av);
		if (!stack_a)
		{
			ft_lstclear(&stack_a);
			error();
		}
		if (check_double(stack_a))
		{
			ft_lstclear(&stack_a);
			error();
		}
		if (if_sorted(stack_a))
			return (ft_lstclear(&stack_a), 0);
		push_swap(&stack_a, &stack_b);
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
	}
	return (0);
}
