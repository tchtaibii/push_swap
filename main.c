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

void	ft_sort_2_3(int ac, t_node *stack_a)
{
	if (ac == 3)
		ft_sort_2(&stack_a);
	if (ac == 4)
		ft_sort_3(&stack_a);
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		if (!ft_dgts_check(av))
			return (0);
		stack_a = ft_stock_st_a(ac, av, stack_a);
		if (!ft_double_check(stack_a))
			return (0);
		ft_sort_and_index(&stack_a);
		ft_sort_2_3(ac, stack_a);
		if (ac == 5)
			ft_sort_4(&stack_a, &stack_b);
		if (ac == 6)
			ft_sort_5(&stack_a, &stack_b);
		if (ac > 6)
			sort_100(&stack_a, &stack_b);
	}
}
