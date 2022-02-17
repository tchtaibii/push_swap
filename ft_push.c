#include "push_swap.h"
int *ft_pb()
{
	int	*stack_temp;
	int i;

	if(stack_A[0])
	{
		if (!stack_B)
		{
			stack_B = malloc(4);
			stack_B[0] = '\0';
		}
		i = table_counter(stack_B) + 1;
		stack_temp = malloc(sizeof(int) * i);
		stack_temp = stack_B;
		stack_B = malloc(sizeof(int) * (i + 1));
		stack_B[i] = '\0';
		stack_B[0] = stack_A[0];
		i = 1;
		while(stack_B[i])
		{
			stack_B[i] = stack_temp[i - 1];
			i++;
		}
		//free(stack_temp);
		ft_increase_a();
	}
	return (stack_B);
}

int *ft_pa()
{
	int	*stack_temp;
	int i;

	if(stack_B[0])
	{
		i = table_counter(stack_A) + 1;
		stack_temp = malloc(sizeof(int) * i);
		stack_temp[0] = stack_B[0];
		i = 0;
		while(stack_A[i])
		{
			stack_temp[i + 1] = stack_A[i];
			i++;
		}
		free(stack_A);
		//free(stack_B[0]);
		stack_temp[i + 1] = '\0';
		i = table_counter(stack_A) + 1;
		stack_A = malloc(sizeof(int) * i);
		stack_A = stack_temp;
		free(stack_temp);
	}
	return (stack_A);
}

