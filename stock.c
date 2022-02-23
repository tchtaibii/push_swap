#include "push_swap.h"

node	*ft_stock_stA(int ac,char **av, node *stack_A)
{
	int i;
	i = 1;
	while(av[i])
	{
		addback(&stack_A, ft_atoi(av[i]), 0);
		i++;
	}
	return (stack_A);
}
int ft_min_of_stack(node *stack_A)
{
	int min;
	node *tmp;

	tmp = stack_A;
	min = tmp->index;
	while (tmp)
	{
		if(min > tmp->index)
			min = tmp->index;
		tmp = tmp->next;
	}
	//printf("%d=====\n", min);
	return (min);
}