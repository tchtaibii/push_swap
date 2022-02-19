#include "push_swap.h"
int ft_sort_deja(node *stack_A)
{
	node *tmp;

	tmp = stack_A;
	while(tmp->next != NULL)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
int	ft_double_check(node *stack_A)
{
	node *tmp;
	node *tmp2;

	tmp = stack_A;
	while(tmp != NULL)
	{
		tmp2 = tmp->next;
		while(tmp2 != NULL)
		{
			if (tmp2->data == tmp->data)
			{
				printf("ERROR");
				return (0);
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	if (ft_sort_deja(stack_A))
		    return (0);
	return (1);
}
