#include "push_swap.h"
void    ft_ra(node **stack_A)
{
    node *tmp;

    addback(stack_A, (*stack_A)->data);
    tmp = (*stack_A)->next;
    free(*stack_A);
    *stack_A = tmp;
}

void    ft_rb(node **stack_B)
{
    node *tmp;

    addback(stack_B, (*stack_B)->data);
    tmp = (*stack_B)->next;
    free(*stack_B);
    *stack_B = tmp;
}

void    ft_rr(node **stack_A, node **stack_B)
{
    ft_ra(stack_A);
    ft_rb(stack_B);
}
