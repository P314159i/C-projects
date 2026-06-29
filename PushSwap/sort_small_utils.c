/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:06:39 by pidi              #+#    #+#             */
/*   Updated: 2026/06/29 15:20:40 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(struct s_node *a)
{
	int	min;

	min = a->value;
	while (a)
	{
		if (a->value < min)
			min = a->value;
		a = a->next;
	}
	return (min);
}

int	find_pos(struct s_node *a, int value)
{
	int	pos;

	pos = 0;
	while (a)
	{
		if (a->value == value)
			return (pos);
		pos++;
		a = a->next;
	}
	return (-1);
}

void	move_min_to_top(struct s_node **a)
{
	int	min;
	int	pos;
	int	size;

	min = find_min(*a);
	pos = find_pos(*a, min);
	size = list_size(*a);
	if (pos <= size / 2)
	{
		while ((*a)->value != min)
			r(a, NULL, "ra");
	}
	else
	{
		while ((*a)->value != min)
			r(a, NULL, "rra");
	}
}
