/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:48:27 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/30 22:59:02 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_putnbr(int num)
{
	long	n;
	int		count;

	count = 0;
	n = num;
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + 48);
	return (count);
}
