/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:47:03 by tkerroum          #+#    #+#             */
/*   Updated: 2023/12/15 01:47:11 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printhex(unsigned int num, int a)
{
	int		counter;
	char	*str;

	counter = 0;
	if (a == 1)
		str = "0123456789abcdef";
	if (a == 2)
		str = "0123456789ABCDEF";
	if (num >= 16)
	{
		counter += ft_printhex(num / 16, a);
		counter += ft_putchar(str[num % 16]);
	}
	if (num < 16)
		counter += ft_putchar(str[num]);
	return (counter);
}
// int main ()
// {
// 	printf("%X\n",10);
// 	ft_printhex(10,2);
// }
