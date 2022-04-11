/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:48:05 by eleotard          #+#    #+#             */
/*   Updated: 2021/12/22 20:18:22 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_putui(unsigned int n, int *length)
{
	if (n > 9)
	{
		ft_putui((n / 10), length);
		ft_putchar((n % 10) + '0', length);
	}
	else
		ft_putchar(n + '0', length);
}
