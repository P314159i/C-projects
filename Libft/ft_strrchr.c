/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:45:58 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 20:53:57 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*i;
	int		j;

	i = 0;
	j = (int)ft_strlen(s);
	while (j-- >= 0)
	{
		if (*s == (char) c)
			i = (char *)s;
		s++;
	}
	return (i);
}

// #include <stdio.h>
// #include <bsd/string.h>
// //
// int	main()
// {
// 	const char s[] = "hollo";
// 	int c = 'v'; 
//    // we cast c cuz int 4 bytes char 1 byte and should not be compared
// 	// printf("string '%s' is the last found %c
// in ft_%s\n", ft_strrchr(s,c), (char)c, s);
// 	printf("character '%c' is the last found %c in 
//*ft_%s\n", *ft_strrchr(s,c), (char)c, s);
// 	printf("character '%c' is the last found %c 
//in *%s\n", *strrchr(s,c), (char)c, s);
// 	// printf("string '%s' is the last found 
//%c in %s\n", strrchr(s,c), (char)c, s);
// 	return (0);
// }