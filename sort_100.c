#include "push_swap.h"
int	ft_search_min_of_range(t_node *stack_a, int min, int max)
{
	int i;

	i = 0;
	while (stack_a)
	{
		if (stack_a->index >= min && stack_a->index <= max)
			return i;
		i++;
		stack_a = stack_a->next;
	}
	return 0;
}

int ft_linkedlen(t_node *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

void	ft_sort_table(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int search_place_index(int index, t_node *stack_b)
{
	t_node *temp;
	int i;

	i = 0;
	temp = stack_b;
	while (temp)
	{
		if (temp->index == index)
			break;
		temp = temp->next;
		i++;
	}
	return (i); 
}
void push_index_b(t_node **stack_a, t_node **stack_b)
{
	int min;
	int push;
	int max;
	int med;
	int size_stack;
	int b;

	size_stack = ft_linkedlen(*stack_a);
	while (size_stack > 5)
	{
		push = (((size_stack - 5) / 3) + 1);
		if (size_stack >= 100)
			push = (((size_stack - 5) / 4) + 1);
		min = ft_min_of_stack(*stack_a);
		max = ((min + push) - 1);
		med = ((min + max) / 2);
		while (push > 0)
		{
			b = ft_search_min_of_range(*stack_a, min, max);
			if (b > size_stack / 2)
			{
				while (b > size_stack / 2)
				{
					if ((*stack_a)->index >= min && (*stack_a)->index <= max)
					{
						ft_pb(stack_a,stack_b);
						if ((*stack_b)->index < med)
						{
							ft_rb(stack_b);
						}
						push--;
					}
					else
						ft_rra(stack_a);
					b--;
					size_stack = ft_linkedlen(*stack_a);
				}
			}
			else if (b <= size_stack / 2)
			{
				while (b <= size_stack / 2)
				{
					if ((*stack_a)->index >= min && (*stack_a)->index <= max)
					{
						ft_pb(stack_a,stack_b);
						if ((*stack_b)->index < med)
						{
							ft_rb(stack_b);
						}
						push--;
					}
					else
						ft_ra(stack_a);
					b++;
					size_stack = ft_linkedlen(*stack_a);
				}
			}
		 }
		size_stack = ft_linkedlen(*stack_a);
	}
}
void	sort_100(t_node **stack_a, t_node **stack_b)
{
	int i;
	int size_stack;

	push_index_b(stack_a,stack_b);
	ft_sort_5(stack_a, stack_b);
	size_stack = ft_linkedlen(*stack_b);
	while (size_stack != 1)
	{
		if ((*stack_a)->index - 1 == (*stack_b)->index)
		{
			ft_pa(stack_a,stack_b);
		}
		while ((*stack_a)->index - 1 != (*stack_b)->index)
		{
			i = search_place_index((*stack_a)->index - 1,*stack_b);
			if (i > size_stack / 2)
			{
				while (i > size_stack / 2)
				{
					if ((*stack_a)->index -1 == (*stack_b)->index)
						break;
					ft_rrb(stack_b);
					i--;
					size_stack = ft_linkedlen(*stack_b);
				}
			}
			else if (i <= size_stack / 2)
			{
				while (i <= size_stack / 2)
				{
					if ((*stack_a)->index -1 == (*stack_b)->index)
						break;
					ft_rb(stack_b);
					i++;
					size_stack = ft_linkedlen(*stack_b);
				}
			}
		 }
		size_stack = ft_linkedlen(*stack_b);
	}
	ft_pa(stack_a, stack_b);
}