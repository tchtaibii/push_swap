#include "push_swap.h"

void    ft_rra(node **stack_A)
{
    node *tmp;
    int value;

    tmp = *stack_A;
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    value = tmp->next->data;
    free(tmp->next);
    tmp->next = NULL;
    addfront(stack_A, value);
}

void    ft_rrb(node **stack_B)
{
    node *tmp;
    int value;

    tmp = *stack_B;
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    value = tmp->next->data;
    free(tmp->next);
    tmp->next = NULL;
    addfront(stack_B, value);
}

void ft_rrr(node **stack_A, node **stack_B)
{
    ft_rra(stack_A);
    ft_rrb(stack_B);
}