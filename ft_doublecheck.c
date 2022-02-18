#include "push_swap.h"

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
	return (1);
}
