#include "push_swap.h"

void    mins(t_stack *stack_a, int *min)
{
    int index;

    *min = (stack_a->value);
    index = (stack_a->index);
    while (stack_a)
    {
        if (stack_a->value < *min)
            {
                *min = stack_a->value;
                index = stack_a->index;
            }
        stack_a = stack_a->next;
    }
    *min = index;
}

void    to_the_top(t_stack *stack_a, int index)
{
    int i;

    i = index;
    if (i <= get_stack_size(stack_a) / 2)
    {
        while (i)
        {
            ra(&stack_a);
            i--;
        }
    }
    else
    {
        while(i < get_stack_size(stack_a))
        {
            rra(&stack_a);
            i++;
        }
    }    
}
void    pentalgo(t_stack *stack_a, t_stack *stack_b)
{
    int min;

    mins(stack_a, &min);
    to_the_top(stack_a, min);
    pb(&stack_a, &stack_b);
    mins(stack_a, &min);
    to_the_top(stack_a, min);
    pb(&stack_a, &stack_b);
    trialgo(&stack_a);
    pa(&stack_a, &stack_b);
    pa(&stack_a, &stack_b);
}