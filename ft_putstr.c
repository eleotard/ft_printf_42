/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:39:47 by eleotard          #+#    #+#             */
/*   Updated: 2021/12/22 22:13:10 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_putstr(char *s, int *length)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		*length += 6;
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], length);
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char s[]= "bonjour";
	int i;

	i = 0;
	
	ft_putstr(s, &i);
	printf("\ni = %d", i);
}*/
