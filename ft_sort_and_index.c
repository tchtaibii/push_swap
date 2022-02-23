#include "push_swap.h"

void	ft_sort_and_index(node **stack_A, int nb)
{
	int *tab;
	int i;
	node *tmp;

	i = 0;
	tmp = *stack_A;
	tab = malloc(sizeof(int) * nb);
	while (tmp != NULL)
	{
		tab[i] = tmp->data;
		i++;
		tmp = tmp->next;
	}
	nb--;
	tab = ft_sort_table(tab, nb);
	ft_index_stack(stack_A, tab, nb);
}
