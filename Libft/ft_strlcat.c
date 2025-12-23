/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:31:27 by pidi              #+#    #+#             */
/*   Updated: 2025/11/16 18:24:13 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t buffer_size)
{
	size_t	d_size;
	size_t	init_d_size;
	size_t	s_size;

	d_size = ft_strlen(dst);
	s_size = ft_strlen(src);
	init_d_size = d_size;
	if (d_size < buffer_size)
		while (*src && d_size + 1 < buffer_size)
			dst[d_size++] = *src++;
	else if (d_size >= buffer_size)
		return (buffer_size + s_size);
	dst[d_size] = '\0';
	return (init_d_size + s_size);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int main()
// {
// 	char s[] = "ab";
// 	char f[] = "ab";
// 	size_t i = 0;
// 	char src[] = "xyz";
// 	printf("st: %zu\n", strlcat("c", src, i));
// 	printf("ft: %zu\n", ft_strlcat("c", src, i));
//  //
// 	char s[] = "ab";
// 	char f[] = "ab";
// 	size_t i = 0;
// 	char src[] = "xyz";
// 	printf("st: %zu\n", strlcat(s, src, i));
// 	printf("ft: %zu\n", ft_strlcat(f, src, i));
// //
// 	char s[] = "e";
// 	char f[] = "e";
// 	size_t i = 2;
// 	char src[] = "c";
// 	printf("st: %zu\n", strlcat(s, src, i));
// 	printf("ft: %zu\n", ft_strlcat(f, src, i));
//  //
// 	char s[] = "e";
// 	char f[] = "e";
// 	size_t i = 1;
// 	char src[] = "c";
// 	printf("st: %zu\n", strlcat(s, src, i));
// 	printf("ft: %zu\n", ft_strlcat(f, src, i));
//  //
// 	char s[] = "e";
// 	char f[] = "e";
// 	size_t i = 2;
// 	char src[] = "c2";
// 	printf("st: %zu\n", strlcat(s, src, i));
// 	printf("ft: %zu\n", ft_strlcat(f, src, i));
//  //
// 	char f[] = "e000";
// 	char s[] = "e000";
// 	size_t i = 2;
// 	char src[] = "c";
// 	printf("st: %zu\n", strlcat(s, src, i));
// 	printf("ft: %zu\n\n", ft_strlcat(f, src, i));
//   //
// 	char s[] = "e";
// 	char f[] = "e";
// 	size_t i = 5;
// 	char src[] = "c";
// 	printf("st: %zu\n", strlcat(s, src, i));
// 	printf("ft: %zu\n", ft_strlcat(f, src, i));
// //
// 	char s[] = "e";
// 	char f[] = "e";
// 	size_t i = 4;
// 	char src[] = "c444";
// 	printf("st: %zu\n", strlcat(s, src, i));
// 	printf("ft: %zu\n", ft_strlcat(f, src, i));
// //
// 	char s[] = "epppp";
// 	char f[] = "epppp";
// 	size_t i = 5;
// 	char src[] = "c";
// 	printf("st: %zu\n", strlcat(s, src, i));
// 	printf("ft: %zu\n", ft_strlcat(f, src, i));
// //
// 	char s[] = "edfgh";
// 	char f[] = "eedfgh";
// 	size_t i = 5;
// 	char src[] = "c";
// 	printf("st: %zu\n", strlcat(s, src, i));
// 	printf("ft: %zu\n", ft_strlcat(f, src, i));
// 	return(0);
// }