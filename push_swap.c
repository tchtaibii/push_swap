#include "push_swap.h"
int main(int ac, char **av)
{
    int i;
    int j;


    i = 1;
    if (ac > 1)
    {
        if(!ft_dgts_check(av))
            return 0;
        stack_A = malloc(sizeof(int) * ac);
        while(av[i])
        {
            stack_A[i-1] = ft_atoi(av[i]);
            i++;
        }
		stack_A[i-1] = '\0';
		j = 0;
		while (stack_A[j] != '\0')
		{
			printf("%d\n",stack_A[j++]);
		}
		
        
    }
    else
        printf("error");

}
