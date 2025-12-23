/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:51:26 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:12:17 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// //doesnt take care of null temrination by defult stndrd man
// int main()
// {
//     printf("%zu\n", ft_strlen(""));
//     printf("%zu\n", strlen(""));
//     printf("%zu\n", ft_strlen(NULL));
//     printf("%zu\n", strlen(0));
// 	   printf("%zu\n", ft_strlen("\0"));
//     printf("%zu\n", strlen("\0"));
//     return (0);
// }