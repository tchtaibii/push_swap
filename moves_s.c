#include "push_swap.h"

void	ft_sa(node **stack_A)
{
	int value1;
	int value2;
	int i1;
	int i2;

	value1 = (*stack_A)->data;
	i1 = (*stack_A)->index;
	value2 = (*stack_A)->next->data;
	i2 = (*stack_A)->next->index;
	(*stack_A)->data = value2;
	(*stack_A)->index = i2;
	(*stack_A)->next->data = value1;
	(*stack_A)->next->index = i1;
	write(1, "sa\n", 3);
}

void	ft_sb(node **stack_B)
{
	int value1;
	int value2;
	int i1;
	int i2;

	value1 = (*stack_B)->data;
	i1 = (*stack_B)->index;
	value2 = (*stack_B)->next->data;
	i2 = (*stack_B)->next->index;
	(*stack_B)->data = value2;
	(*stack_B)->index = i2;
	(*stack_B)->next->data = value1;
	(*stack_B)->next->index = i1;
	write(1, "sb\n", 3);
}
void ft_ss(node **stack_A, node **stack_B)
{
	ft_sa(stack_A);
	ft_sb(stack_B);
	write(1, "ss\n", 3);
}
