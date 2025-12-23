/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 20:21:07 by pidi              #+#    #+#             */
/*   Updated: 2025/12/21 17:43:29 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int	len;
	int	tmp;

	len = 0;
	ft_putnbr_fd(n, 1);
	tmp = n;
	if (tmp < 0)
	{
		len++;
		tmp = -tmp;
	}
	if (tmp == 0)
		len++;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}
