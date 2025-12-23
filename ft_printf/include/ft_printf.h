/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:36:39 by pidi              #+#    #+#             */
/*   Updated: 2025/12/14 21:42:48 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>

int	ft_printf(const char *name, ...);
int	ft_printchar(int c);
int	ft_printnbr(int n);
int	ft_printpercent(void);
int	ft_printstr(char *str);
int	ft_printptr(void *ptr);
int	ft_print_unsigned(unsigned int uint);
int	ft_print_hex(unsigned int num, const char str);
int	ft_hex_conversion(unsigned long num, char format);

#endif