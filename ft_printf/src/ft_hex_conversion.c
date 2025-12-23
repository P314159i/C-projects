/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:45:48 by pidi              #+#    #+#             */
/*   Updated: 2025/12/15 16:51:46 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_conversion(unsigned long num, char format)
{
	char	hex[16];
	int		i;
	int		len;

	i = 0;
	if (num == 0)
		return (ft_printchar('0'));
	while (num > 0)
	{
		if (num % 16 < 10)
			hex[i] = num % 16 + '0';
		else if (format == 'x')
			hex[i] = num % 16 - 10 + 'a';
		else
			hex[i] = num % 16 - 10 + 'A';
		i++;
		num = num / 16;
	}
	len = 0;
	while (i > 0)
	{
		i--;
		len = len + ft_printchar(hex[i]);
	}
	return (len);
}

// #include <stdio.h>
//
// int main ()
// {
// 	unsigned long p = 3000000000;
// 	ft_hex_conversion(p, 'x');
// 	printf("\n%lx\n", p);
// 	return (0);
// }