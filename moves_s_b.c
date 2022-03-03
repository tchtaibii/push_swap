/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   moves_s_b.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:45:07 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/02 22:06:04 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa_b(t_node **stack_a)
{
	int		value1;
	int		value2;
	int		i1;
	int		i2;

	if (ft_linkedlen(*stack_a) > 1)
	{
		value1 = (*stack_a)->data;
		i1 = (*stack_a)->index;
		value2 = (*stack_a)->next->data;
		i2 = (*stack_a)->next->index;
		(*stack_a)->data = value2;
		(*stack_a)->index = i2;
		(*stack_a)->next->data = value1;
		(*stack_a)->next->index = i1;
	}
}

void	ft_sb_b(t_node **stack_b)
{
	int		value1;
	int		value2;
	int		i1;
	int		i2;

	if (ft_linkedlen(*stack_b) > 1)
	{
		value1 = (*stack_b)->data;
		i1 = (*stack_b)->index;
		value2 = (*stack_b)->next->data;
		i2 = (*stack_b)->next->index;
		(*stack_b)->data = value2;
		(*stack_b)->index = i2;
		(*stack_b)->next->data = value1;
		(*stack_b)->next->index = i1;
	}
}

void	ft_ss_b(t_node **stack_a, t_node **stack_b)
{
	ft_sa_b(stack_a);
	ft_sb_b(stack_b);
}
