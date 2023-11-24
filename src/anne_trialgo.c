/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anne_trialgo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:18:00 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/24 08:19:01 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	trialgo_bis(t_stack **stack)
{
	if ((*stack)->next->value > (*stack)->next->next->value)
	{
		sa(stack);
		rra(stack);
	}
	else
	{
		if ((*stack)->value > (*stack)->next->next->value)
			ra(stack);
		else
			sa(stack);
	}
}

void	trialgo(t_stack **stack)
{
	if ((*stack)->value > (*stack)->next->value)
	{
		trialgo_bis(stack);
	}
	else
	{
		if ((*stack)->value > (*stack)->next->next->value)
			rra(stack);
		else
		{
			sa(stack);
			ra(stack);
		}
	}
}
