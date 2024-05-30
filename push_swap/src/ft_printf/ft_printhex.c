/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:47:03 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/30 22:58:47 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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
