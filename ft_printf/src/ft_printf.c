/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:35:53 by pidi              #+#    #+#             */
/*   Updated: 2025/12/21 17:32:44 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len = len + ft_printchar(va_arg(args, int));
	else if (str == 's')
		len = len + ft_printstr(va_arg(args, char *));
	else if (str == 'p')
		len = len + ft_printptr(va_arg(args, void *));
	else if (str == 'd' || str == 'i')
		len = len + ft_printnbr(va_arg(args, int));
	else if (str == 'u')
		len = len + ft_print_unsigned(va_arg(args, unsigned int));
	else if (str == 'x' || str == 'X')
		len = len + ft_print_hex(va_arg(args, unsigned int), str);
	else if (str == '%')
		len = len + ft_printpercent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			len += ft_format(args, *(str + 1));
			str++;
		}
		else
			len += ft_printchar(*str);
		str++;
	}
	va_end(args);
	return (len);
}

// #include <stdio.h>
// #include <limits.h>
// #include "./include/ft_printf.h"

// int main(void)
// {
// 	ft_printf("...%d", NULL);
//     // int ft_ret, og_ret;
//     // int a = 42;
//     // void *ptr = &a;

//     // printf("--- CHAR (%%c) ---\n");
//     // ft_ret = ft_printf("Mine: %c\n", 'z');
//     // og_ret = printf("Real: %c\n", 'z');
//     // printf("Return -> Mine: %d | Real: %d\n\n", ft_ret, og_ret);

//     // printf("--- STRING (%%s) ---\n");
//     // ft_ret = ft_printf("Mine: %s\n", "Hello World");
//     // og_ret = printf("Real: %s\n", "Hello World");
//     // printf("Return -> Mine: %d | Real: %d\n\n", ft_ret, og_ret);

//     // printf("--- POINTER (%%p) ---\n");
//     // ft_ret = ft_printf("Mine: %p\n", ptr);
//     // og_ret = printf("Real: %p\n", ptr);
//     // printf("Return -> Mine: %d | Real: %d\n\n", ft_ret, og_ret);

//     // printf("--- DECIMAL/INT (%%d, %%i) ---\n");
//     // ft_ret = ft_printf("Mine: %d, %i, %d\n", 42, -1234, INT_MIN);
//     // og_ret = printf("Real: %d, %i, %d\n", 42, -1234, INT_MIN);
//     // printf("Return -> Mine: %d | Real: %d\n\n", ft_ret, og_ret);

//     // printf("--- UNSIGNED (%%u) ---\n");
//     // ft_ret = ft_printf("Mine: %u, %u\n", 0, UINT_MAX);
//     // og_ret = printf("Real: %u, %u\n", 0, UINT_MAX);
//     // printf("Return -> Mine: %d | Real: %d\n\n", ft_ret, og_ret);

//     // printf("--- HEX (%%x, %%X) ---\n");
//     // ft_ret = ft_printf("Mine: %x, %X\n", 255, 255);
//     // og_ret = printf("Real: %x, %X\n", 255, 255);
//     // printf("Return -> Mine: %d | Real: %d\n\n", ft_ret, og_ret);

//     // printf("--- PERCENT (%%%%) ---\n");
//     // ft_ret = ft_printf("Mine: %%\n");
//     // og_ret = printf("Real: %%\n");
//     // printf("Return -> Mine: %d | Real: %d\n", ft_ret, og_ret);

//     return (0);
// }
