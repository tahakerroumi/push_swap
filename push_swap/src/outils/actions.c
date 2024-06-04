/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:47:36 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/03 04:20:01 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int ft_lstsize(t_list *lst)
{
    if (lst == 0)
        return (0);
    return (1 + ft_lstsize(lst->next));
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	size--;
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

long	ft_atoi(const char *nptr)
{
	long		i;
	long	signe;
	long	res;

	i = 0;
	res = 0;
	signe = 1;
	while ((nptr[i] == 32) || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + (nptr[i] - '0');
		if ((res * signe > INT_MAX) || (res * signe < INT_MIN))
			return (21474836484);
		i++;
	}
	return (res * signe);
}
void	check_space(char **av)
{
	int	i = 1;
	int j = 0;
	while (av[i])
	{
		while (av[i][j] == ' ')
			j++;
		if (!av[i][j])
			error();
		i++;
	}
	return ;
}

int	check_digit(char **av)
{
	int i = 0;
	int j = 0;
	while (av[i])
		if (!*av[i++])
			return(1);
	check_space(av);
	
	i = 0;	
	while (av[i])
	{
		j = 0;
	
		while (av[i][j])
		{
			if ((av[i][j] == '-' || av[i][j] == '+') && (ft_isdigit(av[i][j + 1])))
				return (0);
			else if (ft_isdigit(av[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
