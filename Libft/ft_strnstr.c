/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:54:04 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 18:01:45 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*lil)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == lil[j] && lil[j] && i + j < len)
			j++;
		if (!lil[j])
			return ((char *)big + i);
		i++;
		j = 0;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>
// //
// int main()
// {
// 	const char *haystack = "Hello, world!";
// 	const char *needle1 = "d!";
// 	const char *needle2 = "Hello";
// 	const char *needle3 = "test";
// 	const char *needle4 = "";
// 	char *res;
// 	res = ft_strnstr(haystack, needle1, 12);
// 	printf("1ft: %s\n", res ? res : "NULL");
// 	res = ft_strnstr(haystack, needle2, 5);
// 	printf("2ft: %s\n", res ? res : "NULL");
// 	res = ft_strnstr(haystack, needle3, 13);
// 	printf("3ft: %s\n", res ? res : "NULL");
// 	res = ft_strnstr(haystack, needle4, 13);
// 	printf("4ft: %s\n\n\n", res ? res : "NULL");
// 	res = strnstr(haystack, needle1, 12);
// 	printf("1str: %s\n", res ? res : "NULL");
// 	res = strnstr(haystack, needle2, 5);
// 	printf("2str: %s\n", res ? res : "NULL");
// 	res = strnstr(haystack, needle3, 13);
// 	printf("3str: %s\n", res ? res : "NULL");
// 	res = strnstr(haystack, needle4, 13);
// 	printf("4str: %s\n", res ? res : "NULL");
// 	return 0;
// }