/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:33:45 by pidi              #+#    #+#             */
/*   Updated: 2025/11/02 19:52:56 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_a;
	unsigned char	*p_b;

	p_a = (unsigned char *)s1;
	p_b = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p_a != *p_b)
			return ((int)*p_a - (int)*p_b);
		p_a++;
		p_b++;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>
// //
// int main()
// {
// 	char s1[] = {1, 5, 3};
// 	char s2[] = {1, 4, 3};
// 	int n = 3;
// 	if (ft_memcmp(s1, s2, n) == 0)
// 		printf("'%s' == '%s' for first %d indxs", s1, s2, n);
// 	if (ft_memcmp(s1, s2, n) > 0)
// 		printf("'%s' is > '%s' for first %d indxs", s1, s2, n);
// 	if (ft_memcmp(s1, s2, n) < 0)
// 		printf("'%s' is < '%s' for first %d indxs", s1, s2, n);
// 	return (0);
// }