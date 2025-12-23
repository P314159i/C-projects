/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:27:02 by pidi              #+#    #+#             */
/*   Updated: 2025/11/20 17:44:22 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *s, char c)
{
	int	count;
	int	check;

	count = 0;
	check = 0;
	while (*s)
	{
		if (check == 0 && *s != c)
		{
			check = !check;
			count++;
		}
		if (check == 1 && *s == c)
			check = !check;
		s++;
	}
	return (count);
}

char	*word_alloc(const char *s, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	free_all(char **arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
		free(arr[i++]);
	free(arr);
}

int	split_word(char const **s, char c, char **arr, int *idx)
{
	int	len;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	arr[*idx] = word_alloc(*s, len);
	if (!arr[*idx])
		return (0);
	(*idx)++;
	*s += len;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ar_split;
	int		word_idx;

	word_idx = 0;
	ar_split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!ar_split)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			if (!split_word(&s, c, ar_split, &word_idx))
			{
				free_all(ar_split, word_idx);
				return (0);
			}
		}
		else
			s++;
	}
	ar_split[word_idx] = NULL;
	return (ar_split);
}

// #include <stdio.h>
//
// int	main()
// {
// 	char	*s = ",hello,,worl, d";
// 	int		c;
// 	char	**ar;
// 	char	dl;
//
// 	dl = ',';
// 	c = word_count(s, dl);
// 	ar = ft_split(s, dl);
// 	c = 0;
// 	while (ar[c])
// 	{
// 		printf("%s\n", ar[c]);
// 		c++;
// 	}
// 	printf("\n");
// 	// printf("%d\n", c);
// 	return (0);
// }