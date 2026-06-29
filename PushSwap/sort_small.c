/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:00:14 by pidi              #+#    #+#             */
/*   Updated: 2026/06/29 15:20:49 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(struct s_node **a)
{
	if ((*a)->value > (*a)->next->value)
		s(a, NULL, "sa");
}

void	sort_three(struct s_node **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second < third && first < third)
		s(a, NULL, "sa");
	else if (first > second && second > third)
	{
		s(a, NULL, "sa");
		r(a, NULL, "rra");
	}
	else if (first > second && second < third && first > third)
		r(a, NULL, "ra");
	else if (first < second && second > third && first < third)
	{
		s(a, NULL, "sa");
		r(a, NULL, "ra");
	}
	else if (first < second && second > third && first > third)
		r(a, NULL, "rra");
}

void	sort_four(struct s_node **a, struct s_node **b)
{
	move_min_to_top(a);
	p(a, b, "pb");
	sort_three(a);
	p(a, b, "pa");
}

void	sort_five(struct s_node **a, struct s_node **b)
{
	move_min_to_top(a);
	p(a, b, "pb");
	move_min_to_top(a);
	p(a, b, "pb");
	sort_three(a);
	p(a, b, "pa");
	p(a, b, "pa");
}
