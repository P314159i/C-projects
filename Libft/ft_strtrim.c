/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:06:57 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 20:58:04 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	while (s1[start] && ft_char_check(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_check(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void)
// {
//     char *trimmed;
// 	printf("init length: 12, s1: xyxyhxelloxy,  set: xy \n\n");
//     trimmed = ft_strtrim("xxyhxelloxy", "xy");
//     if (trimmed)
//     {
//         printf("\n\nResult: '%s'\n", trimmed);
//         free(trimmed);
//     }
//     return 0;
// }
// // 	while (s1[start] && ft_char_check(s1[start], set))
// // 		start++;
// // 	this checks each hacter in s1 with all
// chars in set, then at the first occurance of non-set character the
// ft_check_char will give false and stop the while loop
// // very smart adn i woul dhave never
// guessed myself in a long time. i hsould write it down multiple 
//times on a paper with reasons why it's written the way it is
// // i should remember a good way of seperatin
//g mushmash loops is to use seperate functions