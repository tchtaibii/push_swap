#include "push_swap.h"

node    *ft_stock_stA(int ac,char **av, node *stack_A)
{
    int i;
    i = 1;
    while(av[i])
    {
        addback(&stack_A, ft_atoi(av[i]));
        i++;
    }
    return (stack_A);
}