/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:34:16 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:52:09 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
		while (n-- > 0)
			*d++ = *s++;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// //
// int main()
// {
// 	char str[] = "Hello, World!";
// 	char *x;
// 	x = ft_memmove(str, str + 7, 2);
// 	printf("dest After memmove: %s\n", x);
// //
// 	return 0;
// }