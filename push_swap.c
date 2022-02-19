#include "push_swap.h"
int main(int ac, char **av)
{
	node *stack_A;
    node *stack_B;

	stack_A = NULL;
	stack_B = NULL;
    if (ac > 1)
    {
        if(!ft_dgts_check(av))
            return 0;
        stack_A = ft_stock_stA(ac, av, stack_A);
		if(!ft_double_check(stack_A))
			return (0);
        if (ac == 3)
            ft_sort_2(&stack_A);
        if (ac == 4)
            ft_sort_3(&stack_A);
        if (ac == 5)
            ft_sort_4(&stack_A, &stack_B);
        if (ac == 6)
        {
            ft_sort_5(&stack_A, &stack_B);
        }
        if (ac > 6)
        {
            ft_sort_100(&stack_A, &stack_B, (ac - 1));
        }
        node *tmp;
        tmp = stack_A;
        while(tmp)
		{
			printf("%d----%d \n",tmp->data, tmp->index);
			tmp = tmp->next;
		}
    }
    else
        printf("error");
}
