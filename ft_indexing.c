#include "push_swap.h"

void    ft_index_stack(node **stack_A, int *tab, int nb)
{
    int i;
    node *tmp;

    tmp = *stack_A;
    i = 0;
    while (nb > i)
    {
        while (tmp)
        {

            if (tmp->data == tab[i])
            {
                tmp->index = i;
                break;
            }
            tmp = tmp->next;
        }
        i++;
    }
    
}