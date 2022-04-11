/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:45:44 by eleotard          #+#    #+#             */
/*   Updated: 2021/12/20 14:57:18 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_putnbr(int n, int *val)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", val);
	}
	else if (n < 0)
	{
		ft_putchar('-', val);
		n = n *(-1);
		ft_putnbr(n, val);
	}
	else if (n > 9)
	{
		ft_putnbr((n / 10), val);
		ft_putchar((n % 10) + '0', val);
	}
	else
	{
		ft_putchar(n + '0', val);
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int	n = -2147483648;

	ft_putnbr(n, &i);
	printf("\ni = %d", i);
}*/
