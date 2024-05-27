/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <tkerroum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 00:21:35 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/27 14:01:25 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/push_swap.h"


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
	return len + i - 2;
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

int check_int_min_max(char *str)
{
	unsigned int i;
	int	sign;
	long	num;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		if ((num * sign < INT_MIN) || (num > INT_MAX))
			return (1);
		i++;		
	}
	return (0);
}

int main(int ac, char **av)
{
	t_list*	stack_a;
	char*	str;
	unsigned int i;
	
	stack_a = NULL;
	str = NULL;
	i = 0;
	if (ac > 1)
	{
		char *str = av_join(av);
		char **str_arr = ft_split(str, ' ');
		free(str);
		while (str_arr[i])
		{
			if(check_no_digit(str_arr[i]) || check_int_min_max(str_arr[i]))
				printf("Error\n");
			i++;
		}
		free_double(str_arr);
	}
	return (0);
}