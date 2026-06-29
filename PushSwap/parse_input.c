/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:50:19 by pidi              #+#    #+#             */
/*   Updated: 2026/06/29 15:34:53 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicate(struct s_node *head, int value)
{
	while (head)
	{
		if (head->value == value)
			return (1);
		head = head->next;
	}
	return (0);
}

static int	ft_overflow(long number, int sign)
{
	if (sign == 1 && number > 2147483647)
		return (1);
	if (sign == -1 && number > 2147483648)
		return (1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

int	ft_atoi(const char *nptr, int *error)
{
	int		sign;
	long	number;

	*error = 0;
	sign = 1;
	number = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		number = number * 10 + (*nptr++ - '0');
		if (ft_overflow(number, sign))
			return (*error = 1, 0);
	}
	return ((int)(number * sign));
}

int	valid_input(char *str)
{
	if (*str == '+' || *str == '-')
		str++;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
