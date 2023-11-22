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
        if (stack->value > stack->next->value)
            return (0);
        stack - stack-> next;
    }
    return (1);
}
static void push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
    if (stack_size == 2 && !is_sorted(*stack_a))
        sa(stack_a);
    else if (stack_size == 3)
        // algo pour un tri a 3
    else if (stack_size > 3 && !is_sorted(*stack_a))
        //parsing vers le radix
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
    return (0);
}