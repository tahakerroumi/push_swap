/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:47:33 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/30 22:58:56 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_printu(unsigned int num)
{
	unsigned int	counter;

	counter = 0;
	if (num >= 10)
		counter += ft_printu(num / 10);
	counter += ft_putchar(num % 10 + 48);
	return (counter);
}
