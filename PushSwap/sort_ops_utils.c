/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ops_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:42:02 by pidi              #+#    #+#             */
/*   Updated: 2026/06/29 15:16:38 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	s(struct s_node **a, struct s_node **b, const char *op)
{
	if (ft_strcmp(op, "sa") == 0)
		swap_one(a);
	else if (ft_strcmp(op, "sb") == 0)
		swap_one(b);
	else if (ft_strcmp(op, "ss") == 0)
	{
		swap_one(a);
		swap_one(b);
	}
	else
		return ;
	print_op(op);
}

void	p(struct s_node **a, struct s_node **b, const char *op)
{
	if (ft_strcmp(op, "pa") == 0)
		push_one(b, a);
	else if (ft_strcmp(op, "pb") == 0)
		push_one(a, b);
	else
		return ;
	print_op(op);
}

void	r(struct s_node **a, struct s_node **b, const char *op)
{
	if (ft_strcmp(op, "ra") == 0)
		rotate_one(a);
	else if (ft_strcmp(op, "rb") == 0)
		rotate_one(b);
	else if (ft_strcmp(op, "rr") == 0)
	{
		rotate_one(a);
		rotate_one(b);
	}
	else if (ft_strcmp(op, "rra") == 0)
		reverse_one(a);
	else if (ft_strcmp(op, "rrb") == 0)
		reverse_one(b);
	else if (ft_strcmp(op, "rrr") == 0)
	{
		reverse_one(a);
		reverse_one(b);
	}
	else
		return ;
	print_op(op);
}
