#include "push_swap.h"

int *ft_sa(int *table)
{
    int tmp;

    tmp = stack_A[0];
    stack_A[0] = stack_A[1];
    stack_A[1] = tmp;
    return (table);
}

int *ft_sb(int *table)
{
    int tmp;

    tmp = stack_B[0];
    stack_B[0] = stack_B[1];
    stack_B[1] = tmp;
    return (table);
}