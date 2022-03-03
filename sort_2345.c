/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   sort_2345.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/01 03:04:33 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/01 03:06:00 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_2(t_node **stack_a)
{
	ft_sa(stack_a);
}

void	ft_sort_3(t_node **stack_a)
{
	int		n1;
	int		n2;
	int		n3;

	n1 = (*stack_a)->index;
	n2 = (*stack_a)->next->index;
	n3 = (*stack_a)->next->next->index;
	if (n1 > n2 && n1 > n3 && n3 < n2)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (n1 < n2 && n1 < n3 && n2 > n3)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if (n1 > n2 && n1 < n3 && n2 < n3)
		ft_sa(stack_a);
	else if (n1 > n2 && n1 > n3 && n2 < n3)
		ft_ra(stack_a);
	else if (n1 < n2 && n1 > n3 && n2 > n3)
		ft_rra(stack_a);
}

void	ft_sort_4(t_node **stack_a, t_node **stack_b)
{
	int		value;

	value = ft_find_min(*stack_a);
	if (!ft_sort_deja(*stack_a))
	{
		if (value == 0)
		{
			ft_pb(stack_a, stack_b);
			ft_sort_3(stack_a);
			ft_pa(stack_a, stack_b);
		}
		else if (value == 1)
			ft_sort_4_v1(stack_a, stack_b);
		else if (value == 2)
			ft_sort_4_v2(stack_a, stack_b);
		else if (value == 3)
			ft_sort_4_v3(stack_a, stack_b);
	}
}

void	ft_sort_5(t_node **stack_a, t_node **stack_b)
{
	int		value;

	value = ft_find_min(*stack_a);
	if (value == 0)
	{
		ft_pb(stack_a, stack_b);
		ft_sort_4(stack_a, stack_b);
		ft_pa(stack_a, stack_b);
	}
	else if (value == 1)
		ft_sort_5_v1(stack_a, stack_b);
	else if (value == 2)
		ft_sort_5_v2(stack_a, stack_b);
	else if (value == 3)
		ft_sort_5_v3(stack_a, stack_b);
	else if (value == 4)
		ft_sort_5_v4(stack_a, stack_b);
}
