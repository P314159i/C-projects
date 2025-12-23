/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:37:33 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:11:41 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*sjoin;
	char	*x;

	if (!s1 || !s2)
		return (NULL);
	sjoin = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!sjoin)
		return (NULL);
	x = sjoin;
	while (*s1)
		*sjoin++ = *s1++;
	while (*s2)
		*sjoin++ = *s2++;
	*sjoin = '\0';
	return (x);
}

// #include <stdio.h>
// //
// int main()
// {
// 	char *a = "hello";
// 	char *b = " dear";
// 	char *c = " cat";
// 	char *i = ft_strjoin(a, b);
// 	char *j = ft_strjoin(i, c);
// 	free(i);
// 	printf("%s\n",j);
// 	free(j);
// 	return (0);
// }
