/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   sort_5_norm.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/01 02:15:14 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/01 02:58:54 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_5_v1(t_node **stack_a, t_node **stack_b)
{
	ft_sa(stack_a);
	ft_pb(stack_a, stack_b);
	ft_sort_4(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_sort_5_v2(t_node **stack_a, t_node **stack_b)
{
	ft_rra(stack_a);
	ft_rra(stack_a);
	ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	ft_sort_4(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_sort_5_v3(t_node **stack_a, t_node **stack_b)
{
	ft_rra(stack_a);
	ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	ft_sort_4(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_sort_5_v4(t_node **stack_a, t_node **stack_b)
{
	ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	ft_sort_4(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
