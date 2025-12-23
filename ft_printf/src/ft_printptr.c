/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 20:31:39 by pidi              #+#    #+#             */
/*   Updated: 2025/12/14 21:29:27 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	uintptr_t	p;
	int			len;

	p = (uintptr_t)ptr;
	if (ptr == NULL)
		return (ft_printstr("(nil)"));
	len = ft_printstr("0x");
	len = len + ft_hex_conversion(p, 'x');
	return (len);
}
