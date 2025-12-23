/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:20:01 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:24:27 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// #include <stdio.h>
// #include <string.h>
//
// int main()
// {
// 	char *buffer1[110];
// 	char *buffer2[110];
//
// 	ft_bzero(buffer1 + 2, 10); // Zero out 3 bytes starting from index 2 
// 	printf("ft After bzero: ");
// 	for(int i = 0; i < 10; i++)
// 	printf("%s", buffer1[i]);
//
// 	bzero(buffer2 + 2, 10); // Zero out 3 bytes starting from index 2 
//     printf("\n bzero After bzero: ");
// 	for(int i = 0; i < 10; i++)
// 	printf("%s", buffer2[i]);
// 	printf("\n");
//     return 0;
// }