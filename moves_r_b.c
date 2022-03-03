/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   moves_r_b.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:43:19 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/02 22:09:58 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra_b(t_node **stack_a)
{
	t_node	*tmp;

	if (ft_linkedlen(*stack_a) > 1)
	{
		addback(stack_a, (*stack_a)->data, (*stack_a)->index);
		tmp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = tmp;
	}
}

void	ft_rb_b(t_node **stack_b)
{
	t_node	*tmp;

	if (ft_linkedlen(*stack_b) > 1)
	{
		addback(stack_b, (*stack_b)->data, (*stack_b)->index);
		tmp = (*stack_b)->next;
		free(*stack_b);
		*stack_b = tmp;
	}
}

void	ft_rr_b(t_node **stack_a, t_node **stack_b)
{
	ft_ra_b(stack_a);
	ft_rb_b(stack_b);
}
