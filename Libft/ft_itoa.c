/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:36:19 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:00:58 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c = 1;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (len > 0 && str[len - 1] != '-')
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

// #include "stdio.h"
// #include <limits.h>
// //
// int main()
// {
// 	int c = -1414;
// 	char *s = ft_itoa(c);
// 	printf("%s\n", s);
// 	// free (s);
// 	return (0);
// }