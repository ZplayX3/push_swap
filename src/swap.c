/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:28:16 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/15 12:41:22 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *src)
{
	int	tmp;

	if (src == NULL || src->next == NULL)
		return ;
	tmp = src->value;
	src->value = src->next->value;
	src->next->value = tmp;
	tmp = src->index;
	src->index = src->next->index;
	src->next->index = tmp;
}

void	sa(t_stack **stack_a)
{
	swap(*stack_a);
	ft_putstr("sa/n");
}

void	sb(t_stack **stack_b)
{
	swap(*stack_b);
	ft_putstr("sb/n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr("ss/n");
}
