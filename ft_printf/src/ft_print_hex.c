/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:05:12 by pidi              #+#    #+#             */
/*   Updated: 2025/12/15 16:55:21 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int num, const char str)
{
	return (ft_hex_conversion(num, str));
}

// #include <stdio.h>
// //
// int main ()
// {
// 	unsigned long p = 3000555000;
// 	const char s = 'x';
// 	ft_print_hex(p, s);
// 	printf("\n%lx\n", p);
// 	return (0);
// }