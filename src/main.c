/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:30:26 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/22 10:30:30 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted (t_stack *src)
{
    while (src->next != NULL)
    {
        if (src->value > src->next->value)
            return (0);
       src = src->next;
    }
    return (1);
}
static void push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
    if (stack_size == 2 && !is_sorted(*stack_a))
        sa(stack_a);
    //else if (stack_size == 3)
        // algo pour un tri a 3
    else if (stack_size > 3 && !is_sorted(*stack_a))
        radix(*stack_a, *stack_b);
}

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int     stack_size;

    if (ac < 2)
        return (0);
    if (!input_check(av))
        exit_error(NULL, NULL);
    stack_b = NULL;
    stack_a = fill_stack(ac, av);
    stack_size = get_stack_size(stack_a);
    push_swap(&stack_a, &stack_b, stack_size);
	free_stack(&stack_a);
	free_stack(&stack_b);
    return (0);
}