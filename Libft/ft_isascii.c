/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:35:12 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 16:58:43 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("__a:\n");
// 	printf("%d\n",ft_isascii('a'));
// 	printf("%d\n",isascii('a'));
// 	printf("__64:\n");
// 	printf("%d\n",ft_isascii(64));
// 	printf("%d\n",isascii(64));
// 	printf("__129:\n");
// 	printf("%d\n",ft_isascii(129));
// 	printf("%d\n",isascii(129));
// 	printf("__2:\n");
// 	printf("%d\n",ft_isascii(2));
// 	printf("%d\n",isascii(2));
// 	printf("__-1:\n");
// 	printf("%d\n", ft_isascii(-1));
// 	printf("%d\n", isascii(-1));
// 	printf("__0:\n");
// 	printf("%d\n", ft_isascii(0));
// 	printf("%d\n", isascii(0));
// 	printf("__127:\n");
// 	printf("%d\n", ft_isascii(127));
// 	printf("%d\n", isascii(127));
// 	printf("__128:\n");
// 	printf("%d\n", ft_isascii(128));
// 	printf("%d\n", isascii(128));
// 	printf("__255:\n");
// 	printf("%d\n", ft_isascii(255));
// 	printf("%d\n", isascii(255));
// 	printf("__65 ('A'):\n");
// 	printf("%d\n", ft_isascii('A'));
// 	printf("%d\n", isascii('A'));
// 	printf("__10 ('\\n'):\n");
// 	printf("%d\n", ft_isascii('\n'));
// 	printf("%d\n", isascii('\n'));
// 	printf("__EOF:\n");
// 	printf("%d\n", ft_isascii(EOF));
// 	printf("%d\n", isascii(EOF));
// 	printf("__200:\n");
// 	printf("%d\n", ft_isascii(200));
// 	printf("%d\n", isascii(200));
// 	printf("__10000:\n");
// 	printf("%d\n", ft_isascii(10000));
// 	printf("%d\n", isascii(10000));
// 	return 0;	
// }