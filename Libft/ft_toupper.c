/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:08:25 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:16:49 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
//
// int main()
// {
// 	char c = 'y';
// 	printf("character is: %c\n character 
//to upper is: %c\n", c, (char)ft_toupper(c));
// 	printf("character is: %c\n character
// to upper is: %c\n", c, (char)toupper(c));
// 	return (0);
// }