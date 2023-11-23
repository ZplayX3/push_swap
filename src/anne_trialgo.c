#include "push_swap.h"
 /*
static int  max_index(t_stack *stack)
{
    int i;

    i = stack->index;
    while(stack)
    {
        if (stack->index > i)
            i = stack-> index;
        stack = stack->next;
    }
    return (i);
}

void    trialgo(t_stack **stack)
{
    int max;
    
    if (is_sorted(*stack))
        return ;
    max = max_index(*stack);
    printf("%d\n", max);
    if ((*stack)->index == max)
    {
        printf("%d\n", (*stack)->next->index);
        ra(stack);
        printf("coucou\n");
    }
    else if ((*stack)->next->index == max)
        rra(stack);
    if ((*stack)->index > (*stack)->next->index)
        sa(stack);
}
*/

void   trialgo_bis(t_stack **stack)
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

void    trialgo(t_stack **stack)
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