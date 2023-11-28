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

static void	print_stack(t_stack *stack)
{
	while(stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

void	mins(t_stack *stack_a, int *min)
{
	int	index;
	int	valeur;

	printf("min at start of mins: %d\n", *min);
	print_stack(stack_a);
	valeur = (stack_a->value);
	printf("Valeur : %d\n", valeur);
	index = 0;
	while (stack_a)
	{
		if (stack_a->value < valeur)
		{
			valeur = stack_a->value;
			*min = index;
		}
		stack_a = stack_a->next;
		index++;
	}
	printf("min:%d\n", *min);
}

void	to_the_top(t_stack **stack_a, int index)
{
	int	i;

	i = index;
	if (i <= get_stack_size(*stack_a) / 2)
	{
		printf("i've been there\n");
		while (i)
		{
			printf("i in while%d\n", i);
			ra(stack_a);
			i--;
		}
	}
	else
	{
		printf("or there\n");
		while (i < get_stack_size(*stack_a))
		{
			printf("and i got to the while\n");
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
	printf("stack a:\n");
	print_stack(*stack_a);
	printf("stack b:\n");
	print_stack(*stack_b);
	mins(*stack_a, &min);
	to_the_top(stack_a, min);
	pb(stack_a, stack_b);
	trialgo(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
