/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:05:11 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/24 07:55:41 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_bottom(t_stack *src)
{
	while (src && src->next != NULL)
		src = src->next;
	return (src);
}

t_stack	*stack_before_bottom(t_stack *stack)
{
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

t_stack	*create_stack(int i)
{
	t_stack	*new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
	new->value = i;
	new->index = 0;
	new->pos = -1;
	new->next = NULL;
	return (new);
}

void	stack_add(t_stack **stack, t_stack *new)
{
	t_stack	*tail;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tail = stack_bottom(*stack);
	tail->next = new;
}

int	get_stack_size(t_stack	*stack)
{
	int	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}
