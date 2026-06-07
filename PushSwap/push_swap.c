/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:41:31 by pidi              #+#    #+#             */
/*   Updated: 2026/06/07 20:56:53 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct node
{
	int		value;
	struct	node* next;
};


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
	int				i;
	int				error;
	struct node		*head;
	struct node		*last;
	struct node		*new;

	head = NULL;
	last = NULL;
	i = 1;
	while (i < argc)
	{
		if (!valid_input(argv[i]))
			return (printf("Error\n"), 1);

		new = malloc(sizeof(struct node));
		new->value = ft_atoi(argv[i], &error);
		new->next = NULL;

		if (error)
			return (printf("Error\n"), 1);

		if (head == NULL)
			head = new;
		else
			last->next = new;

		last = new;
		i++;
	}
	return (0);