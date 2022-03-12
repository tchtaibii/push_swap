/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.c											 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:34:01 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/01 23:18:29 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

t_node	*split_args(char **av, int ac, char **str, t_node *stack_a)
{
	int	i;
	int	j;

	i = 1;
	(void)ac;
	while (av[i])
	{
		if (av[i][0] == ' ')
			ft_exit();
		str = ft_split(av[i], ' ');
		if (!ft_dgts_check(str))
			return (0);
		stack_a = ft_stock_st_a(str, stack_a, 0);
		j = 0;
		while (str[j])
		{
			free(str[j]);
			j++;
		}
		free(str);
		i++;
	}
	return (stack_a);
}

void	ft_sort_2_3(int ac, t_node *stack_a)
{
	if (ac == 2)
		ft_sort_2(&stack_a);
	else
		ft_sort_3(&stack_a);
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**str;

	stack_a = NULL;
	stack_b = NULL;
	str = NULL;
	if (ac > 1)
	{
		stack_a = split_args(av, ac, str, stack_a);
		if (!ft_double_check(stack_a))
			return (0);
		ft_sort_and_index(&stack_a);
		if (ft_linkedlen(stack_a) == 2 || ft_linkedlen(stack_a) == 3)
			ft_sort_2_3(ft_linkedlen(stack_a), stack_a);
		else if (ft_linkedlen(stack_a) == 4)
			ft_sort_4(&stack_a, &stack_b);
		else if (ft_linkedlen(stack_a) == 5)
			ft_sort_5(&stack_a, &stack_b);
		else if (ft_linkedlen(stack_a) > 5)
			sort_100(&stack_a, &stack_b);
	}
}
