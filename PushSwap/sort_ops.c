/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:54:29 by pidi              #+#    #+#             */
/*   Updated: 2026/06/29 15:35:49 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_one(struct s_node **stack)
{
	struct s_node	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	second = (*stack)->next;
	(*stack)->next = second->next;
	second->next = *stack;
	*stack = second;
}

void	push_one(struct s_node **src, struct s_node **dest)
{
	struct s_node	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
}

void	rotate_one(struct s_node **stack)
{
	struct s_node	*first;
	struct s_node	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	reverse_one(struct s_node **stack)
{
	struct s_node	*prev;
	struct s_node	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	print_op(const char *op)
{
	int	len;

	len = 2;
	if (op[2] != '\0')
		len = 3;
	write(1, op, len);
	write(1, "\n", 1);
}
