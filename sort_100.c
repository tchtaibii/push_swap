#include "push_swap.h"

int  ft_search_pos(node *stack_A, int index)
{
	int i;

	i = 0;
	while (stack_A != NULL)
	{
		if (stack_A->index == index)
			return (i);
		i++;
		stack_A = stack_A->next;
	}
	return (0);
}

int ft_linkedlen(node *stack)
{
	int i;

	i = 0;
	if (!stack)
		return 0;
	while (stack != NULL)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int	*ft_sort_table(int *tab, int nb)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < (nb - 1))
	{
		j = 0;
		while ( j < (nb - i))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			++j;
		}
		i++;
	}
	return (tab);
}

void	ft_sorting(node **stack_A, node **stack_B, int nb)
{
	int min;
	int max;
	int med;
	int p;
	int size;
	int j = 0;
	node *tmp;
	int i = 0;
	
	size =  ft_linkedlen(*stack_A);
	tmp = *stack_A;
	while (size > 5)
	{
		min = ft_min_of_stack(*stack_A);
		size =  ft_linkedlen(*stack_A) - 1;
		p = ((size - 5) / 3) + 1;
		max = (min + p) - 1;
		med = (min + max) / 2;
		while ((*stack_A)->index != min)
		{
			if (med >= size / 2)
				med = size / 2;
			if (ft_search_pos(*stack_A, min) <= size / 2)
			{
				if ((*stack_A)->index >= min && (*stack_A)->index <= max)
				{
					ft_pb(stack_A, stack_B);
				}
				else
					ft_ra(stack_A);
			}
			if (ft_search_pos(*stack_A, min) > size / 2)
			{
				if ((*stack_A)->index >= min && (*stack_A)->index <= max)
				{
					ft_pb(stack_A, stack_B);
				}
				else
					ft_rra(stack_A);
			}
		}
		if ((*stack_A)->index >= min && (*stack_A)->index <= max)
				ft_pb(stack_A, stack_B);
	}
	ft_sort_5(stack_A, stack_B);
	size = ft_linkedlen(*stack_B) - 1;
	//tmp = *stack_B;
	while (size > 0)
	{
		size = ft_linkedlen(*stack_B) - 1;
		if ((*stack_A)->index - 1 == (*stack_B)->index)
			ft_pa(stack_A, stack_B);
		else
		{
			while ((*stack_A)->index - 1 != (*stack_B)->index)
			{
				if ((*stack_A)->index - 2 == (*stack_B)->index)
				{
					ft_pa(stack_A, stack_B);
					ft_ra(stack_A);
					i++;
				}
				else
					ft_rb(stack_B);
			}
			ft_pa(stack_A, stack_B);
			while (i > 0)
			{
				ft_rra(stack_A);
				i--;
			}
			i = 0;
		}
	}
	//*stack_B = tmp;
	// while ((*stack_B)->next != NULL)
	// {
	//	 ft_pa(stack_A, stack_B);
	//	 *stack_B = (*stack_B)->next;
	// }
	// ft_pa(stack_A, stack_B);
	 
}
