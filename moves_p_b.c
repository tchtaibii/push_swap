/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   moves_p_b.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:42:35 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/02 22:09:51 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (ft_linkedlen(*stack_a))
	{
		addfront(stack_b, (*stack_a)->data, 0);
		tmp = (*stack_a)->next;
		(*stack_a)-> next = 0;
		free(*stack_a);
		*stack_a = tmp;
	}
}

void	ft_pa_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (ft_linkedlen(*stack_b))
	{
		addfront(stack_a, (*stack_b)->data, 0);
		tmp = (*stack_b)->next;
		(*stack_b)-> next = 0;
		free(*stack_b);
		*stack_b = tmp;
	}
}
