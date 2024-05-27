/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:47:36 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/26 15:00:35 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
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

int	ft_isdigit(int c)
{
	return (c <= 57 && c >= 48);
}

int	ft_isalpha(int c)
{
	return ((c <= 122 && c >= 97) || (c >= 65 && c <= 90));
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
		if ((res >= INT_MAX && signe == 1) || (res <= INT_MIN && signe == -1))
			return (21474836484);
		i++;
	}
	return (res * signe);
}
