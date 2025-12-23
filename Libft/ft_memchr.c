/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:01:19 by pidi              #+#    #+#             */
/*   Updated: 2025/11/20 16:16:27 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (0);
}

// #include "stdio.h"
// #include "bsd/string.h"
// //
// int main(void)
// {
//     char str[] = "Hello#blah2";
//     int c = '#';
//     size_t n = 2;
// //
//     char *p_std = memchr(str, c, n);
//     char *p_ft  = ft_memchr(str, c, n);
// //
//     if (p_std)
//         printf("memchr found '%c' at position: %ld\n", c, p_std - str);
//     else
//         printf("memchr did not find '%c'\n", c);
// //
//     if (p_ft)
//         printf("ft_memchr found '%c' at position: %ld\n", c, p_ft - str);
//     else
//         printf("ft_memchr did not find '%c'\n", c);
// //
//     return 0;
// }