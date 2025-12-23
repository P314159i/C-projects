/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 20:28:59 by pidi              #+#    #+#             */
/*   Updated: 2025/12/15 17:03:26 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	c;

	len = 0;
	if (n >= 10)
		len = len + ft_print_unsigned(n / 10);
	c = (n % 10) + '0';
	len += ft_printchar(c);
	return (len);
}

// #include <stdio.h>
// //
// int main ()
// {
// 	unsigned int p = 3000555000;
// 	ft_print_unsigned(p);
// 	printf("\n%u\n", p);
// 	return (0);
// }