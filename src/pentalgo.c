/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pentalgo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:12:17 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/24 08:14:30 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
static void	print_stack(t_stack *stack)
{
	while(stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}
*/
void	mins(t_stack *stack_a, int *min)
{
	int	index;
	int	valeur;

	valeur = (stack_a->value);
	index = 0;
	while (stack_a)
	{
		if (stack_a->value <= valeur)
		{
			valeur = stack_a->value;
			*min = index;
		}
		stack_a = stack_a->next;
		index++;
	}
}

void	to_the_top(t_stack **stack_a, int index)
{
	int	i;

	i = index;
	if (i <= get_stack_size(*stack_a) / 2)
	{
		while (i)
		{
			ra(stack_a);
			i--;
		}
	}
	else
	{
		while (i < get_stack_size(*stack_a))
		{
			rra(stack_a);
			i++;
		}
	}
	index = 0;
}

void	pentalgo(t_stack **stack_a, t_stack **stack_b)
{
	int	min;

	mins(*stack_a, &min);
	to_the_top(stack_a, min);
	pb(stack_a, stack_b);
	mins(*stack_a, &min);
	to_the_top(stack_a, min);
	pb(stack_a, stack_b);
	if (get_stack_size(*stack_a) == 2 && !is_sorted(*stack_a))
		sa(stack_a);
	else
		if (!is_sorted(*stack_a))
			trialgo(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
