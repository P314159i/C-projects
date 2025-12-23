/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:46:59 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:40:19 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*x;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	x = sub;
	while (s[start] && len-- > 0)
		*sub++ = s[start++];
	*sub = '\0';
	return (x);
}

// #include <stdio.h>
// #include <string.h>
// //
// int main()
// {
// 	char	*a = ft_substr("goodbye", 2, 5);
// 	printf("%s\n", a);
// 	free(a);
// 	char	*b = ft_substr("goodbye", 2, 7);
// 	printf("%s\n", b);
// 	free(b);
// 	char	*c = ft_substr("", 2, 7);
// 	printf("%s\n", c);
// 	free(c);
// 	char	*d = ft_substr("goodbye", 2, 0);
// 	printf("%s\n", d);
// 	free(d);
// 	char	*e = ft_substr("", 2, 0);
// 	printf("%s\n", e);
// 	free(e);
// 	return (0);
// }
