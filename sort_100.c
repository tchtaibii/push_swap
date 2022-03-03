/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   sort_100.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/01 03:16:07 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/01 23:18:02 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	push_index_b(t_node **stack_a, t_node **stack_b, int b)
{
	t_va	va;

	va.size_stack = ft_linkedlen(*stack_a);
	while (va.size_stack > 5)
	{
		va.push = (((va.size_stack - 5) / 3) + 1);
		if (va.size_stack >= 100)
			va.push = (((va.size_stack - 5) / 4) + 1);
		va.min = ft_min_of_stack(*stack_a);
		va.max = ((va.min + va.push) - 1);
		va.med = ((va.min + va.max) / 2);
		while (va.push > 0)
		{
			b = ft_search_min_of_range(*stack_a, va.min, va.max);
			if (b > va.size_stack / 2)
			{
				while (b > va.size_stack / 2)
				{
					if ((*stack_a)->index >= va.min && \
						(*stack_a)->index <= va.max)
					{
						ft_pb(stack_a, stack_b);
						if ((*stack_b)->index < va.med)
							ft_rb(stack_b);
						va.push--;
					}
					else
						ft_rra(stack_a);
					b--;
					va.size_stack = ft_linkedlen(*stack_a);
				}
			}
			else if (b <= va.size_stack / 2)
			{
				while (b <= va.size_stack / 2)
				{
					if ((*stack_a)->index >= va.min && \
						(*stack_a)->index <= va.max)
					{
						ft_pb(stack_a, stack_b);
						if ((*stack_b)->index < va.med)
							ft_rb(stack_b);
						va.push--;
					}
					else
						ft_ra(stack_a);
					b++;
					va.size_stack = ft_linkedlen(*stack_a);
				}
			}
		}
		va.size_stack = ft_linkedlen(*stack_a);
	}
}

void	sort_100(t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	s_stack;

	push_index_b(stack_a, stack_b, 0);
	ft_sort_5(stack_a, stack_b);
	s_stack = ft_linkedlen(*stack_b);
	while (s_stack != 1)
	{
		if ((*stack_a)->index - 1 == (*stack_b)->index)
			ft_pa(stack_a, stack_b);
		while ((*stack_a)->index - 1 != (*stack_b)->index)
		{
			i = search_place_index((*stack_a)->index - 1,*stack_b);
			if (i > s_stack / 2)
			{
				while (i > s_stack / 2)
				{
					if ((*stack_a)->index -1 == (*stack_b)->index)
						break ;
					ft_rrb(stack_b);
					i--;
					s_stack = ft_linkedlen(*stack_b);
				}
			}
			else if (i <= s_stack / 2)
			{
				while (i <= s_stack / 2)
				{
					if ((*stack_a)->index -1 == (*stack_b)->index)
						break ;
					ft_rb(stack_b);
					i++;
					s_stack = ft_linkedlen(*stack_b);
				}
			}
		}
		s_stack = ft_linkedlen(*stack_b);
	}
	ft_pa(stack_a, stack_b);
}
