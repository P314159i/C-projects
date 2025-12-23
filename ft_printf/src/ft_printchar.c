/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 22:42:16 by pidi              #+#    #+#             */
/*   Updated: 2025/12/15 17:04:38 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

// #include <stdio.h>
// //
// int main ()
// {
// 	unsigned int p = 'x';
// 	ft_printchar(p);
// 	printf("\n%c\n", p);
// 	return (0);
// }