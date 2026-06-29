/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 18:09:59 by pidi              #+#    #+#             */
/*   Updated: 2026/06/29 16:14:50 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

struct s_node
{
	int				value;
	int				index;
	int				position;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	int				above_median;
	int				cheapest;
	struct s_node	*next;
};

/* Parsing */
int		valid_input(char *str);
int		ft_atoi(const char *nptr, int *error);
int		has_duplicate(struct s_node *head, int value);

/* Stack utilities */
void	free_list(struct s_node *head);
int		list_size(struct s_node *head);
int		is_sorted(struct s_node *head);
void	assign_indexes(struct s_node *head);

/* Basic operation utilities */
void	swap_one(struct s_node **stack);
void	push_one(struct s_node **src, struct s_node **dest);
void	rotate_one(struct s_node **stack);
void	reverse_one(struct s_node **stack);
void	print_op(const char *op);

/* Operations */
void	s(struct s_node **a, struct s_node **b, const char *op);
void	p(struct s_node **a, struct s_node **b, const char *op);
void	r(struct s_node **a, struct s_node **b, const char *op);

/* Small-sort utilities */
int		find_min(struct s_node *a);
int		find_pos(struct s_node *a, int value);
void	move_min_to_top(struct s_node **a);

/* Small sorting */
void	sort_two(struct s_node **a);
void	sort_three(struct s_node **a);
void	sort_four(struct s_node **a, struct s_node **b);
void	sort_five(struct s_node **a, struct s_node **b);

/* Large sorting */
void	sort_big(struct s_node **a, struct s_node **b);

/* Large sorting utilities */
void	move_target_to_top(struct s_node **a, int target);
int		find_target(struct s_node *a, int value);
int		move_cost(int pos, int size);
int		find_cheapest(struct s_node *a, struct s_node *b);
void	move_b_to_top(struct s_node **b, int value);

#endif