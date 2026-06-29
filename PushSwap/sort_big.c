/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:42:01 by pidi              #+#    #+#             */
/*   Updated: 2026/06/29 16:15:43 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(struct s_node **a, struct s_node **b)
{
	int	target;

	while (list_size(*a) > 3)
		p(a, b, "pb");
	sort_three(a);
	while (*b)
	{
		target = find_cheapest(*a, *b);
		move_b_to_top(b, target);
		target = find_target(*a, (*b)->value);
		move_target_to_top(a, target);
		p(a, b, "pa");
	}
	move_min_to_top(a);
}
