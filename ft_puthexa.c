/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 07:55:52 by eleotard          #+#    #+#             */
/*   Updated: 2021/12/22 19:37:46 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_puthexa(unsigned int n, int *val)
{
	char	*basehexa;

	basehexa = "0123456789abcdef";
	if (n > 15)
	{
		ft_puthexa(n / 16, val);
		ft_putchar(basehexa[n % 16], val);
	}
	else
		ft_putchar(basehexa[n], val);
}

/*#include <stdio.h>
int main(void)
{
	int n;

	int i;

	i = 0;
	n = 284;:
	ft_puthexa(n, &i);
	printf("\n");
	printf("i : %d", i);
}*/
