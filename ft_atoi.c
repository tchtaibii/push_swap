#include "push_swap.h"
int	ft_atoi(char *str)
{
	long long	r;
	int				i;
	int				o;
	
	if (!str[0])
	{
		write(1, "ERROR", 5);
		exit(1);
	}
	i = 0;
	r = 0;
	o = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			o = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	if ((r * o) > 2147483647 || (r * o) < -2147483648)
	{
		write(1, "ERROR", 5);
		exit(1);
	}
	return (o * r);
}
