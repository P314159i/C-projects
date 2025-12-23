/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:52:12 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 18:06:28 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (const unsigned char *)src;
	d = (unsigned char *) dest;
	if (!dest && !src)
		return ((void *)src);
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
//
// int main()
// {
//     char x[6] = "s"; 
// 	char y[2];
// 	ft_memcpy(x, y, 2);
// 	printf("final is: %s\n", x);
//     return (0);
// }