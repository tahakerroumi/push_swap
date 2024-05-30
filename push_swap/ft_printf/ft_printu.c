/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:47:33 by tkerroum          #+#    #+#             */
/*   Updated: 2023/12/15 01:47:36 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(unsigned int num)
{
	unsigned int	counter;

	counter = 0;
	if (num >= 10)
		counter += ft_printu(num / 10);
	counter += ft_putchar(num % 10 + 48);
	return (counter);
}
