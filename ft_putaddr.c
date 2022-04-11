/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:04:52 by eleotard          #+#    #+#             */
/*   Updated: 2021/12/22 20:10:07 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_puthexx(unsigned long long n, int *length)
{
	char	*basehexa;

	basehexa = "0123456789abcdef";
	if (n > 15)
	{
		ft_puthexx((n / 16), length);
		ft_putchar(basehexa[n % 16], length);
	}
	else
		ft_putchar(basehexa[n], length);
}

void	ft_putaddr(unsigned long long n, int *length)
{
	ft_putstr("0x", length);
	ft_puthexx(n, length);
}

/*int	main(void)
  {
  int	a;
  int length;

  a = 10;
  length = 0;
  unsigned long long adress = (unsigned long long)&a;
// unsigned long long pad = (unsigned long long)&p;

printf("%p\n", &a);
ft_putaddr(adress, &length);

}*/
