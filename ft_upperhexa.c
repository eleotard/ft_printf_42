/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:22:11 by eleotard          #+#    #+#             */
/*   Updated: 2021/12/22 20:20:39 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_upperhexa(unsigned int n, int *length)
{
	char	*basehexa;

	basehexa = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_upperhexa(n / 16, length);
		ft_putchar(basehexa[n % 16], length);
	}
	else
		ft_putchar(basehexa[n], length);
}
