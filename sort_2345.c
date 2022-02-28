#include "push_swap.h"

void ft_sort_2(node **stack_A)
{
	ft_sa(stack_A);
}

void	ft_sort_3(node **stack_A)
{
	int n1;
	int n2;
	int n3;

	n1 = (*stack_A)->index;
	n2 = (*stack_A)->next->index;
	n3 = (*stack_A)->next->next->index;
	if (n1 > n2 && n1 > n3 && n3 < n2)
	{
		ft_sa(stack_A);
		ft_rra(stack_A);
	}
	else if (n1 < n2 && n1 < n3 && n2 > n3)
	{
		ft_sa(stack_A);
		ft_ra(stack_A);
	}
	else if (n1 > n2 && n1 < n3 && n2 < n3)
		ft_sa(stack_A);
	else if (n1 > n2 && n1 > n3 && n2 < n3)
		ft_ra(stack_A);
	else if (n1 < n2 && n1 > n3 && n2 > n3)
		ft_rra(stack_A);
}
void	ft_sort_4(node **stack_A, node **stack_B)
{
	int value;

	value = ft_find_min(*stack_A);
	if (value == 0)
	{
		ft_pb(stack_A, stack_B);
		ft_sort_3(stack_A);
		ft_pa(stack_A, stack_B);
	}
	else if (value == 1)
	{
		ft_sa(stack_A);
		ft_pb(stack_A, stack_B);
		ft_sort_3(stack_A);
		ft_pa(stack_A, stack_B);

	}
	else if (value == 2)
	{
		ft_rra(stack_A);
		ft_rra(stack_A);
		ft_pb(stack_A, stack_B);
		ft_sort_3(stack_A);
		ft_pa(stack_A, stack_B);
	}
	else if (value == 3)
	{
		ft_rra(stack_A);
		ft_pb(stack_A, stack_B);
		ft_sort_3(stack_A);
		ft_pa(stack_A, stack_B);
	}
}

void	 ft_sort_5(node **stack_A, node **stack_B)
{
	int value;

	value = ft_find_min(*stack_A);
	if (value == 0)
	{
		ft_pb(stack_A, stack_B);
		ft_sort_4(stack_A, stack_B);
		ft_pa(stack_A, stack_B);
	}
	else if (value == 1)
	{
		ft_sa(stack_A);
		ft_pb(stack_A, stack_B);
		ft_sort_4(stack_A, stack_B);
		ft_pa(stack_A, stack_B);

	}
	else if (value == 2)
	{
		ft_rra(stack_A);
		ft_rra(stack_A);
		ft_rra(stack_A);
		ft_pb(stack_A, stack_B);
		ft_sort_4(stack_A, stack_B);
		ft_pa(stack_A, stack_B);
	}
	else if (value == 3)
	{
		ft_rra(stack_A);
		ft_rra(stack_A);
		ft_pb(stack_A, stack_B);
		ft_sort_4(stack_A, stack_B);
		ft_pa(stack_A, stack_B);
	}
	else if (value == 4)
	{
		ft_rra(stack_A);
		ft_pb(stack_A, stack_B);
		ft_sort_4(stack_A, stack_B);
		ft_pa(stack_A, stack_B);
	}
}
