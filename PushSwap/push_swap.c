/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:41:31 by pidi              #+#    #+#             */
/*   Updated: 2026/06/29 16:29:00 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(struct s_node **a, struct s_node **b)
{
	int	size;

	size = list_size(*a);
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else
		sort_big(a, b);
}

static struct	s_node	*create_node(char *arg, struct s_node *head, int *error)
{
	struct s_node	*new;

	if (!valid_input(arg))
		return (*error = 1, NULL);
	new = malloc(sizeof(struct s_node));
	if (!new)
		return (*error = 2, NULL);
	new->value = ft_atoi(arg, error);
	if (*error || has_duplicate(head, new->value))
	{
		free(new);
		*error = 1;
		return (NULL);
	}
	new->index = -1;
	new->next = NULL;
	return (new);
}

static struct	s_node	*build_stack(int argc, char **argv, int *error)
{
	struct s_node	*head;
	struct s_node	*last;
	struct s_node	*new;
	int				i;

	head = NULL;
	last = NULL;
	i = 1;
	*error = 0;
	while (i < argc)
	{
		new = create_node(argv[i], head, error);
		if (!new)
			return (free_list(head), NULL);
		if (!head)
			head = new;
		else
			last->next = new;
		last = new;
		i++;
	}
	return (head);
}

int	main(int argc, char **argv)
{
	struct s_node	*a;
	struct s_node	*b;
	int				error;

	b = NULL;
	a = build_stack(argc, argv, &error);
	if (error)
	{
		if (error == 1)
			write(2, "Error\n", 6);
		return (1);
	}
	assign_indexes(a);
	if (!is_sorted(a))
		sort(&a, &b);
	free_list(a);
	free_list(b);
	return (0);
}

/* read input
validate input
build stack A
choose sorting algorithm
algorithm calls sa/pb/pa/ra/etc.
print operation names
free memory */
/*
2 numbers: only 2 possible orders. One sa is enough.
3 numbers: only 6 permutations (3! = 6). You can hard-code 
	the best solution for each.
4 numbers: easiest solution is "push the smallest, sort 3, push back."
5 numbers: same idea, but push the two smallest.
More than 5: hard-coding is impossible because the 
	number of permutations explodes.
For example:
    6 numbers → 720 permutations
	100 numbers → about 9.3×10^157 permutations
So for larger inputs you use a general algorithm like Turk, Radix, or Chunk.

ARG="9 4 7 1 8 2 6 3 5"
./push_swap ${=ARG} | wc -l

cc -Wall -Wextra -Werror *.c -o push_swap
ARG="9 4 7 1 8 2 6 3 5"
./push_swap ${=ARG} | ./checker_linux ${=ARG}

ARG=$(seq 1 100 | shuf | tr '\n' ' ')  

the | means take the output of the 
		command on the left and feed it as input to the command on the right.

*/