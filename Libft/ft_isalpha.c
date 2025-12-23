/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:37:06 by pidi              #+#    #+#             */
/*   Updated: 2025/10/11 19:24:28 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1024);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("__@:\n");
// 	printf("%d\n",ft_isalpha('@'));
// 	printf("%d\n",isalpha('@'));
// 	printf("__2:\n");
// 	printf("%d\n",ft_isalpha(2));
// 	printf("%d\n",isalpha(2));
// 	printf("__z:\n");
// 	printf("%d\n",ft_isalpha('z'));
// 	printf("%d\n",isalpha('z'));
// 	printf("__a:\n");
// 	printf("%d\n",ft_isalpha('a'));
// 	printf("%d\n",isalpha('a'));
// 	printf("__A:\n");
// 	printf("%d\n",ft_isalpha('A'));
// 	printf("%d\n",isalpha('A'));
// 	printf("__Z:\n");
// 	printf("%d\n",ft_isalpha('Z'));
// 	printf("%d\n",isalpha('Z'));
// 	printf("__edge @ before A:\n");
// 	printf("%d\n",ft_isalpha(64));
// 	printf("%d\n",isalpha(64));
// 	printf("__edge before a:\n");
// 	printf("%d\n",ft_isalpha(96));
// 	printf("%d\n",isalpha(96));
// 	printf("__edge after Z:\n");
// 	printf("%d\n",ft_isalpha(91));
// 	printf("%d\n",isalpha(91));
// 	printf("__edge after z:\n");
// 	printf("%d\n",ft_isalpha(123));
// 	printf("%d\n",isalpha(123));
// 	return 0;	
// }