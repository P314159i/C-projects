/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:25:30 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:13:15 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*a != *b || (*a == '\0' && *b == '\0'))
			return ((int)*a - *b);
		a++;
		b++;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>
// //
// int main()
// {
// 	char s1[] = "abcd‡";
// 	char s2[] = "abcd‡";
// 	int n = 5;
// 	// if (ft_strncmp(s1, s2, n) > 0)
// 	// 	printf("%s is bigger than %s in the first %d indx\n", s1, s2, n);
// 	// if (ft_strncmp(s1, s2, n) < 0)
// 	// 	printf("%s is smaller than %s in the first %d indx\n", s1, s2, n);
// 	// if (ft_strncmp(s1, s2, n) == 0)
// 	// 	printf("%s is equal to %s in the first %d indx\n", s1, s2, n);
// 	printf("ft:%d\n", ft_strncmp(s1, s2, n));
// 	printf("st:%d\n", strncmp(s1, s2, n));
// 	return (0);
// }