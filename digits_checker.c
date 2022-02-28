#include "push_swap.h"
int	ft_dgts_check(char **str)
{
	int	i;
	int	j;

	i = 1;
	while(str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-' || str[i][j] == '+')
			{
				if ((str[i][j+1] >= 48 && str[i][j+1] <= 57))
					j++;
				else if ((str[i][j+1] < 48 && str[i][j+1] < 57))
				{
					write(1, "ERROR", 5);
					return 0;
				}
			}
			if (str[i][j] < '0' || str[i][j] > '9')
			{
				write(1, "ERROR", 5);
				return 0;
			}
			j++;
		}
		i++;	
	}
	return 1;
}