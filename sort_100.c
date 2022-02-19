#include "push_swap.h"
int    *ft_sort_table(int *tab, int nb)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < (nb - 1))
    {
        j = 0;
        while ( j < (nb - 1 - i))
        {
            //while (1);
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = temp;
            }
            ++j;
        }
        i++;
    }
    return tab;
}
void    ft_sort_100(node **stack_A, node **stack_B, int nb)
{
    int *tab;
    node *tmp;
    int i;

    
    i = 0;
    tmp = *stack_A;
    tab = malloc(sizeof(int) * nb);
    
    while (tmp)
    {
        tab[i] = tmp->data;
        i++;
        tmp = tmp->next;
    }
    nb--;
    tab = ft_sort_table(tab, nb);
    ft_index_stack(stack_A, tab, nb);

    i = 0;
    while ((nb + 1) > i)
    {
        printf("%d ",tab[i]);
        i++;
    }
}