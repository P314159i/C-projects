/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:15:00 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 16:59:02 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("__a\n");
// 	printf("%d\n",ft_isdigit('a'));
// 	printf("%d\n",isdigit('a'));
// 	printf("__@\n");
// 	printf("%d\n",ft_isdigit(64));
// 	printf("%d\n",isdigit(64));
// 	printf("__'@'\n");
// 	printf("%d\n",ft_isdigit('@'));
// 	printf("%d\n",isdigit('@'));
// 	printf("__0 decimal equivalent of null\n");
// 	printf("%d\n",ft_isdigit(0));
// 	printf("%d\n",isdigit(0));
// 	printf("__edge before '0'\n");
// 	printf("%d\n",ft_isdigit(47));
// 	printf("%d\n",isdigit(47));
// 	printf("__'0' ascii digit\n");
// 	printf("%d\n",ft_isdigit(48));
// 	printf("%d\n",isdigit(48));
// 	return 0;	
// }