#include "push_swap.h"
int table_counter(int *table)
{
    int i;

    while (table[i])
        i++;
    return (i);
}
