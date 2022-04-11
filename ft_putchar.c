/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:43:56 by eleotard          #+#    #+#             */
/*   Updated: 2021/12/22 20:12:41 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libprintf.h"*/
#include <unistd.h>

void	ft_putchar(char c, int *length)
{
	write(1, &c, 1);
	*length += 1;
}