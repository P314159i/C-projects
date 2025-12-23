/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:55:09 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 20:07:10 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	s = malloc((nmemb * size));
	if (!s)
		return (0);
	ft_bzero(s, nmemb * size);
	return (s);
}

// #include <stdio.h>
// //
// int main() {
//     int *arr = ft_calloc(5, sizeof(int));
//     if (!arr) return 1;
//     for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
//     free(arr);
//     return 0;
// }