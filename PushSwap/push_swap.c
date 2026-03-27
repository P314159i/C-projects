/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:41:31 by pidi              #+#    #+#             */
/*   Updated: 2026/03/27 19:34:23 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct {
	int data[MAX];
	int top;
} stack;

stack createstack(void)
{
	stack a;
	stack b;

	b.top = -1; 
	a.top = -1;
	return a;
}
// void sa (stack *a)
// {
// 	int tmp;
// 	if (a -> top < 1)
// 		return ;
// 	tmp = a -> data[a -> top];
// 	a -> data[a -> top] = a -> data [a -> top - 1];
// 	a -> data [a -> top - 1] = tmp;
// }

int main(int argc, char**argv)
{
	int i;

	i = 0;
	printf("have %d args:\n", argc);
	while (i <= argc) //fixxxxxxxxxxxxxxxxxxxxxxxxxxx
		printf("%s ", argv[i++]);
	printf("\n");

	return (0);
}