/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:00:28 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 20:37:03 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	s_size;

	count = 0;
	s_size = ft_strlen(src);
	if (size != 0)
	{
		while (*src && size > 1)
		{
			*dst = *src;
			count++;
			src++;
			size--;
			dst++;
		}
		*dst = '\0';
	}
	return (s_size);
}

// #include <stdio.h>
// #include <bsd/string.h>
// //
// int main()
// {
// 	char	dest[2];
// 	printf("%zu\n", ft_strlcpy(dest, "sarah",  10));
// 	return (0);
// }