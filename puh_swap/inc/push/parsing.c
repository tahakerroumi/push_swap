/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <tkerroum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:55:33 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/27 13:31:56 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 && s2)
		return (ft_strdup(s2));
	else if (!s2 && s1)
		return (ft_strdup(s1));
	str = (char *)malloc((sizeof(char)) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	i = 0;
	while (s2[i])
	{
		str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	str[ft_strlen(s1) + i] = '\0';
	return (str);
}

void	error(char *str)
{
	if(str)
		free(str);
	write(2,"Error\n",sizeof("Error\n"));
	exit(1);
}

int	check_string(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (((str[i] == '+' || str[i] == '-') && (!ft_isdigit(str[i + 1]))))
			return (1);
		else if ((str[i] == '+' || str[i] == '-') && (str[i + 1] == '+' || str[i + 1] == '-'))
			return (1);
		else if (ft_isalpha(str[i]))
			return (1);
		else if ((i > 0 &&  (str[i] == '+' || str[i] == '-') && str[i - 1] != ' ' ))
		{
			return (1);
		}
		
		i++;
	}
	return (0);
}

char*	space(char *str)
{
	char *p;

	p = ft_strjoin(str," ");
	free(str);
	return (p);
}

int	check_no_digit(char *str)
{
	int i = 0;
	
	if (str[i] == '+' || str[i] == '-')
			i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}	
	return (0);
}

char*	parsing(int ac, char **av)
{
	int		i;
	char	*tmp;
	char	*str;

	str = NULL;
	i = 1;
	while (i < ac)
	{
		tmp = str;
		str = space(ft_strjoin(str,av[i]));
		i++;
		free(tmp);
	}
	return (str);
}

