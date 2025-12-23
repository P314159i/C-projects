/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:56:59 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:10:18 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	char	*i;

	sdup = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = sdup;
	if (sdup == 0)
		return (sdup);
	while (*s)
		*sdup++ = *s++;
	*sdup = '\0';
	return (i);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// //
// int main()
// {
// 	const char	*x="xx";
// 	char *y = ft_strdup(x);
// 	printf("dup: %s\nlen_dup: %zu\nlen_org:
// %zu\n", y, ft_strlen(y), ft_strlen(x));
// 	int is_null_terminated = (y[strlen(y)] == '\0');
// 	printf("Null terminator present? %d\n", is_null_terminated);
//	free (y);
// 	return (0);
// }
