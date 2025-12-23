/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:30:02 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:43:55 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

// #include <stdio.h>
// #include <bsd/string.h>
// //
// int main()
// {
//     char s[] = "";
//     char c;
//     printf("%c is found in ft_%s\n", *ft_strchr(s,c), s);
//     printf("%c is found in %s\n", *strchr(s,c), s);
//     return (0);
// }
