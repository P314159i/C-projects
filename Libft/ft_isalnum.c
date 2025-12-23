/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:23:53 by pidi              #+#    #+#             */
/*   Updated: 2025/10/11 19:18:56 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("__@:\n");
// 	printf("%d\n",ft_isalnum('@'));
// 	printf("%d\n",isalnum('@'));
// 	printf("__2:\n");
// 	printf("%d\n",ft_isalnum(2));
// 	printf("%d\n",isalnum(2));
// 	printf("__z:\n");
// 	printf("%d\n",ft_isalnum('z'));
// 	printf("%d\n",isalnum('z'));
// 	printf("__a:\n");
// 	printf("%d\n",ft_isalnum('a'));
// 	printf("%d\n",isalnum('a'));
// 	printf("__A:\n");
// 	printf("%d\n",ft_isalnum('A'));
// 	printf("%d\n",isalnum('A'));
// 	printf("__Z:\n");
// 	printf("%d\n",ft_isalnum('Z'));
// 	printf("%d\n",isalnum('Z'));
// 	printf("__edge @ before A:\n");
// 	printf("%d\n",ft_isalnum(64));
// 	printf("%d\n",isalnum(64));
// 	printf("__edge before a:\n");
// 	printf("%d\n",ft_isalnum(96));
// 	printf("%d\n",isalnum(96));
// 	printf("__edge after Z:\n");
// 	printf("%d\n",ft_isalnum(91));
// 	printf("%d\n",isalnum(91));
// 	printf("__edge after z:\n");
// 	printf("%d\n",ft_isalnum(123));
// 	printf("%d\n",isalnum(123));
// 	printf("__'@'\n");
// 	printf("%d\n",ft_isalnum('@'));
// 	printf("%d\n",isalnum('@'));
// 	printf("__0 decimal equivalent of null\n");
// 	printf("%d\n",ft_isalnum(0));
// 	printf("%d\n",isalnum(0));
// 	printf("__edge before '0'\n");
// 	printf("%d\n",ft_isalnum(47));
// 	printf("%d\n",isalnum(47));
// 	printf("__'0' ascii digit\n");
// 	printf("%d\n",ft_isalnum(48));
// 	printf("%d\n",isalnum(48));
// 	return 0;	
// }