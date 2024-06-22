/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:39:33 by tkerroum          #+#    #+#             */
/*   Updated: 2024/06/03 04:20:41 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_isalpha(int c)
{
	return ((c <= 122 && c >= 97) || (c >= 65 && c <= 90));
}

int	ft_isdigit(int c)
{
	return (c <= 57 && c >= 48);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*p;
	char	*t;
	size_t	len;

	len = ft_strlen((char *)s);
	p = (char *)malloc((sizeof(char) * (len + 1)));
	if (!p)
		return (NULL);
	t = p;
	while (*s)
	{
		*p++ = *s++;
	}
	*p = '\0';
	return (t);
}

int	check_int_min_max(char *str)
{
	unsigned int	i;
	int				sign;
	long			num;

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
		if ((num * sign < INT_MIN) || (num * sign > INT_MAX))
			return (1);
		i++;
	}
	return (0);
}
