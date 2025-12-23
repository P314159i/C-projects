/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 16:36:34 by pidi              #+#    #+#             */
/*   Updated: 2025/11/20 16:16:10 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int ch, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (len-- > 0)
		*ptr++ = ch;
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// //
// int main() {
//     char str[50] = "whats gonna happen?";
//     printf("Before: %s\n", str);
//     ft_memset(str + 6, '\0', 4);
//     printf("After: %s\n", str);
//     return 0;
// }