/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:19:50 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:16:37 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
//
// int main()
// {
// 	char c = 'H';
// 	printf("character is: %c\n character to
// lower is: %c\n", c, (char)ft_tolower(c));
// 	printf("character is: %c\n character to 
//lower is: %c\n", c, (char)tolower(c));
// 	return (0);
// }