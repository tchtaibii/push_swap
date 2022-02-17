#include "push_swap.h"
int main(int ac, char **av)
{
    int i;
    int j;

    
	c = ac;
    if (ac > 1)
    {
        if(!ft_dgts_check(av))
            return 0;
        stack_A = malloc(sizeof(int) * ac);
		i = 1;
        while(av[i])
        {
            stack_A[i-1] = ft_atoi(av[i]);
            i++;
        }
		stack_A[i-1] = '\0';
		if(!ft_double_check(stack_A))
			return (0);
		// stack_B = malloc(2);
		// stack_B[0] = 92;
		// stack_A = ft_pa();
		ft_pb();
		i = 0;
		while(stack_B[i])
		{
			printf("%d \n",stack_B[i++]);
		}
		i = 0;
		while(stack_A[i])
		{
			printf("|%d| \n",stack_A[i++]);
		}
        
    }
    else
        printf("error");

}
