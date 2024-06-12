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

size_t get_av_len(char **av)
{
	int i;
	size_t len;

	i = 1;
	len = 0;
	while(av[i])
	{	
		len += ft_strlen(av[i]);
		i++;	
	}
	return (len + i - 2);
}

char *av_join(char **av)
{
	char *str;
	int i, j, y;
	size_t len;
	
	i = 1;
	y = 0;
	len = get_av_len(av);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while(av[i])
	{
		j = 0;	
		while(av[i][j])
			str[y++] = av[i][j++];
		str[y++] = ' '; 
		i++;
	}
	str[--y] = '\0';
	return (str);
}

t_list *list_parse(char **av)
{
	char	*str;
	char	**str_arr;
	int		i;
	t_list	*list;
	
	i = 0;
	if (check_digit(av))
		error();
	str = av_join(av);
	check_no_digit(str);
	str_arr = ft_split(str, ' ');
	if (!str_arr)
	{
		free (str);
		error();
	}
	free(str);
	while (str_arr[i])
	{
		if(check_no_digit(str_arr[i]) || check_int_min_max(str_arr[i]))
		{
			free_double(str_arr);
			return (NULL);
		}
		i++;
	}
	list = list_create(str_arr);
	if (!list)
	{
		ft_lstclear(&list);
		free_double(str_arr);
		error();
	}
	free_double(str_arr);
	return (list);
}

int main(int ac, char **av)
{
    t_list    *lst;
    t_list    *stack_b;
    
    if (ac > 1)
    {
        stack_b = NULL;
        lst = list_parse(av);
        if (!lst)
        {
            ft_lstclear(&lst);
            error();
        }
        if (!lst || check_double(lst))
        {
            ft_lstclear(&lst);
            error();
        }
        if (if_sorted(lst))
            return (ft_lstclear(&lst), 0);
        push_swap(&lst, &stack_b);
        ft_lstclear(&lst);
        ft_lstclear(&stack_b);
    }
    return (0);
}