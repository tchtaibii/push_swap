#include "push_swap.h"

void	ft_pb(node **stack_A, node **stack_B)
{
	node *tmp;

	addfront(stack_B, (*stack_A)->data, (*stack_A)->index);
	tmp = (*stack_A)->next;
	(*stack_A)->next = 0;
	free(*stack_A);
	*stack_A = tmp;
	write(1, "pb\n", 3);
}

void	ft_pa(node **stack_A, node **stack_B)
{
	node *tmp;

	addfront(stack_A, (*stack_B)->data, (*stack_B)->index);
	tmp = (*stack_B)->next;
	(*stack_B) -> next = 0;
	free(*stack_B);
	*stack_B = tmp;
	write(1, "pa\n", 3);
}
