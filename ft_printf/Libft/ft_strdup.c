/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:56:59 by pidi              #+#    #+#             */
/*   Updated: 2025/12/13 20:56:19 by pidi             ###   ########.fr       */
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
