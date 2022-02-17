#include "push_swap.h"

void    ft_increase_a()
{
    int i;
    int *temp;

    i = table_counter(stack_A);
    temp = stack_A;
    free(stack_A);
    stack_A = malloc(sizeof(int) * (i));
	i = 0;
	while (temp[i + 1])
	{
		stack_A[i] = temp[i + 1];
		i++;
	}
	stack_A[i] = '\0';
	//free(temp);
}
