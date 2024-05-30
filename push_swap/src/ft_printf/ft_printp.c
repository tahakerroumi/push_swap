/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:30:59 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/30 22:58:53 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_printp(unsigned long num)
{
	unsigned long	count;
	char			*str;

	count = 0;
	if (!num)
		return (ft_putstr("(nil)"));
	str = "0123456789abcdef";
	if (num >= 16)
	{
		count += ft_printp(num / 16);
		count += ft_putchar(str[num % 16]);
	}
	if (num < 16)
	{
		count += ft_putstr("0x");
		count += ft_putchar(str[num]);
	}
	return (count);
}
// int main ()
// {
// 	char* p = NULL;
// 	// int a = 14;
// 	// p = &a;
// 	printf("%p\n",&p);
// 	ft_printp(&p);
// }
