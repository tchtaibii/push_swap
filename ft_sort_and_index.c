#include "push_swap.h"

void	ft_sort_and_index(node **stack_A)
{
	int *tab;
	int i;
	int	nb;
	node *tmp;

	i = 0;
	tmp = *stack_A;
	nb = ft_linkedlen(*stack_A);
	tab = malloc(sizeof(int) * nb);
	while (tmp != NULL)
	{
		tab[i] = tmp->data;
		i++;
		tmp = tmp->next;
	}
	ft_sort_table(tab, nb);
	ft_index_stack(stack_A, tab, nb);
}
