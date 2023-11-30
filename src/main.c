/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:30:26 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/24 08:24:29 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *src)
{
	while (src->next != NULL)
	{
		if (src->value > src->next->value)
			return (0);
		src = src->next;
	}
	return (1);
}

static void	push_swap(t_stack **a, t_stack **b, int size, t_stack **cpy)
{
	if (size == 2 && !is_sorted(*a))
		sa(a);
	else if (size == 3 && !is_sorted(*a))
		trialgo(a);
	else if (size > 3 && size <= 5 && !is_sorted(*a))
		pentalgo(a, b);
	else if (size > 5 && !is_sorted(*a))
		radix(*a, *b, *cpy);
}

static t_stack	**dump_truck(t_stack *stack, int ac)
{
	t_stack	**garbage;
	t_stack	*cursor;
	int		i;

	i = 0;
	garbage = malloc(sizeof (t_stack *) * (ac - 1));
	if (!garbage)
		return (NULL);
	cursor = stack;
	while (cursor)
	{
		garbage[i++] = cursor;
		cursor = cursor->next;
	}
	return (garbage);
}

static void	free_garbage(t_stack **garbage, int ac)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		free(garbage[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*cpy;
	t_stack	**garbage;
	int		stack_size;

	if (ac < 2)
		return (0);
	if (!input_check(av))
		exit_error(NULL, NULL);
	stack_b = NULL;
	stack_a = fill_stack(ac, av);
	cpy = fill_stack(ac, av);
	stack_size = get_stack_size(stack_a);
	garbage = dump_truck(stack_a, ac);
	push_swap(&stack_a, &stack_b, stack_size, &cpy);
	free_garbage(garbage, ac);
	free(garbage);
	free_stack(&stack_b);
	free_stack(&cpy);
	return (0);
}
