#include "push_swap.h"

int ft_find_index_min(node *stack_A, int value)
{
	node *tmp;
	int index;

	tmp = stack_A;
	index = 0;
	while (tmp)
	{
		if (tmp->data == value)
			return (index);
		index++;
		tmp = tmp->next;
	}
	return index;
}

int	ft_find_min(node *stack_A)
{
	int i;
	node *tmp;

	i = stack_A->data;
	tmp = stack_A;
	while (tmp)
	{
		if (i > tmp->data)
			i = tmp->data;
		tmp = tmp->next;
	}
	i = ft_find_index_min(stack_A, i);
	return (i);
}
