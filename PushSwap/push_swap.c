/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:41:31 by pidi              #+#    #+#             */
/*   Updated: 2026/03/28 14:30:53 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct {
	int data[MAX];
	int top;
} stack;

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}


stack createstack(void)
{
	stack a;
	stack b;

	b.top = -1;
	a.top = -1;
	return a;
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

int	ft_atoi(const char *nptr, int *error)
{
	int		sign;
	long	intgr;

	*error = 0;
	sign = 1;
	intgr = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		intgr = intgr * 10 + (*nptr - '0');
		if ((sign == 1 && intgr > 2147483647)
			|| (sign == -1 && intgr > 2147483648))
		{
			*error = 1;
			return (0);
		}
		nptr++;
	}
	return ((int)(intgr * sign));
}


int	main(int argc, char **argv)
{
	int	i;
	int	n;
	int	error;

	if (argc < 2)
		return (printf("please enter 2 or more numbers\n"), 1);
	i = 1;
	while (i < argc)
	{
		if (!valid_input(argv[i]))
			return (printf("Error\n"), 1);
		n = ft_atoi(argv[i], &error);
		if (error)
			return (printf("Error\n"), 1);
		i++;
	}
	printf("%d\n", n);
	return (0);
}
