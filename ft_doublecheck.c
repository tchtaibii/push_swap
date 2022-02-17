#include "push_swap.h"

int	ft_double_check(int *table)
{
	int	i;
	int	j;

	i = 0;
	while(table[i])
	{
		j = i + 1;
		while(table[j])
		{
			if (table[j] == table[i])
			{
				printf("ERROR");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
