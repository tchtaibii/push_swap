#include "push_swap.h"

void	ft_pb(node **stack_A, node **stack_B)
{
	node *tmp;

	if (stack_A)
	{
		addfront(stack_B, (*stack_A)->data, (*stack_A)->index);
		tmp = (*stack_A)->next;
		(*stack_A) -> next = 0;
		free(*stack_A);
		*stack_A = tmp;
		printf("pb\n");
	}
}

void	ft_pa(node **stack_A, node **stack_B)
{
	node *tmp;

	if ((*stack_B)->data)
	{
		addfront(stack_A, (*stack_B)->data, (*stack_B)->index);
		tmp = (*stack_B)->next;
		(*stack_B) -> next = 0;
		free(*stack_B);
		*stack_B = tmp;
		printf("pa\n");
	}
}
