/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:12:40 by pidi              #+#    #+#             */
/*   Updated: 2026/06/29 16:12:51 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_target_to_top(struct s_node **a, int target)
{
	int	pos;
	int	size;

	pos = find_pos(*a, target);
	size = list_size(*a);
	if (pos <= size / 2)
	{
		while ((*a)->value != target)
			r(a, NULL, "ra");
	}
	else
	{
		while ((*a)->value != target)
			r(a, NULL, "rra");
	}
}

int	find_target(struct s_node *a, int value)
{
	struct s_node	*head;
	int				target;
	int				found;

	head = a;
	found = 0;
	target = 0;
	while (a)
	{
		if (a->value > value && (!found || a->value < target))
		{
			target = a->value;
			found = 1;
		}
		a = a->next;
	}
	if (!found)
		target = find_min(head);
	return (target);
}

int	move_cost(int pos, int size)
{
	if (pos <= size / 2)
		return (pos);
	return (size - pos);
}

int	find_cheapest(struct s_node *a, struct s_node *b)
{
	struct s_node	*current;
	int				best_value;
	int				best_cost;
	int				cost;
	int				pos;

	current = b;
	pos = 0;
	best_cost = 2147483647;
	while (current)
	{
		cost = move_cost(pos, list_size(b));
		cost += move_cost(find_pos(a,
					find_target(a, current->value)), list_size(a));
		if (cost < best_cost)
		{
			best_cost = cost;
			best_value = current->value;
		}
		current = current->next;
		pos++;
	}
	return (best_value);
}

void	move_b_to_top(struct s_node **b, int value)
{
	int	pos;
	int	size;

	pos = find_pos(*b, value);
	size = list_size(*b);
	while ((*b)->value != value)
	{
		if (pos <= size / 2)
			r(NULL, b, "rb");
		else
			r(NULL, b, "rrb");
	}
}
