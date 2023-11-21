/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:05:11 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/15 13:40:38 by tlachman         ###   ########.fr       */
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
	t_stack *new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
}