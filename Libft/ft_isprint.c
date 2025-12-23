/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:20:58 by pidi              #+#    #+#             */
/*   Updated: 2025/11/20 16:16:35 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// //
// int main()
// {
// 	printf("%d\n", ft_isprint(127));
// 	printf("%d\n", isprint(127));
// 		printf("%d\n", ft_isprint(126));
// 	printf("%d\n", isprint(126));
// 	return (0);
// }