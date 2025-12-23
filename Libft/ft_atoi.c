/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:17:06 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 16:57:30 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	intgr;

	sign = 1;
	intgr = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr > 47 && *nptr < 58)
		intgr = intgr * 10 + (*nptr++ - 48);
	return (intgr * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// //
// int main()
// {
// 	const char s[] = "\n-2147483648  -*6%1447";
// 	const char p[] = "\n -2147483648  -*6%1447";
//     printf("\nft:%d\n\n", ft_atoi(s));
// 	printf("at:%d\n\n", atoi(p));
// 	return (0);
// }