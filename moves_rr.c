#include "push_swap.h"

void	ft_rra(node **stack_A)
{
	node *tmp;
	int value;
	int index;
	if (*stack_A)
	{
	tmp = *stack_A;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	value = tmp->next->data;
	index = tmp->next->index;
	free(tmp->next);
	tmp->next = NULL;
	addfront(stack_A, value, index);
	printf("rra\n");
	}
}

void	ft_rrb(node **stack_B)
{
	node *tmp;
	int value;
	int index;
	if (*stack_B)
	{
	tmp = *stack_B;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	value = tmp->next->data;
	index = tmp->next->index;
	free(tmp->next);
	tmp->next = NULL;
	addfront(stack_B, value, index);
	printf("rrb\n");
	}
}

void ft_rrr(node **stack_A, node **stack_B)
{
	ft_rra(stack_A);
	ft_rrb(stack_B);
	printf("rrr\n");
}