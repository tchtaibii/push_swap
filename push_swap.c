#include "push_swap.h"
int main(int ac, char **av)
{
    int i;
    int j;
	int c;

	node *stack_A;
    node *stack_B;

	stack_A = NULL;
	stack_B = NULL;
	c = ac;
    if (ac > 1)
    {
        if(!ft_dgts_check(av))
            return 0;
		i = 1;
        while(av[i])
        {
            addback(&stack_A, ft_atoi(av[i]));
            i++;
        }
				if(!ft_double_check(stack_A))
			return (0);
		
		ft_rra(&stack_A);
		ft_rra(&stack_A);
		ft_pb(&stack_A,&stack_B);
		ft_pb(&stack_A,&stack_B);
		ft_rrr(&stack_A,&stack_B);
		ft_rr(&stack_A,&stack_B);
		ft_pa(&stack_A,&stack_B);
		
		printf("STACK_A\n");
		while(stack_A)
		{
			printf("%d \n",stack_A->data);
			stack_A = stack_A->next;
		}
		printf("STACK_B\n");
		while(stack_B)
		{
			printf("%d \n",stack_B->data);
			stack_B = stack_B->next;
		}
    }
    else
        printf("error");

}
