/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 20:47:52 by pidi              #+#    #+#             */
/*   Updated: 2025/12/22 15:58:47 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*x;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	x = sub;
	while (s[start] && len-- > 0)
		*sub++ = s[start++];
	*sub = '\0';
	return (x);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

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

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*ft_strdup(const char *s)
{
	char	*sdup;
	char	*i;

	if (!s)
		return (NULL);
	sdup = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!sdup)
		return (NULL);
	i = sdup;
	while (*s)
		*sdup++ = *s++;
	*sdup = '\0';
	return (i);
}
