#include "push_swap.h"
void	ft_ra(node **stack_A)
{
	node *tmp;

	addback(stack_A, (*stack_A)->data, (*stack_A)->index);
	tmp = (*stack_A)->next;
	free(*stack_A);
	*stack_A = tmp;
	write(1, "ra\n", 3);
}

void	ft_rb(node **stack_B)
{
	node *tmp;

	addback(stack_B, (*stack_B)->data, (*stack_B)->index);
	tmp = (*stack_B)->next;
	free(*stack_B);
	*stack_B = tmp;
	write(1, "rb\n", 3);
}

void	ft_rr(node **stack_A, node **stack_B)
{
	ft_ra(stack_A);
	ft_rb(stack_B);
	write(1, "rr\n", 3);
}
