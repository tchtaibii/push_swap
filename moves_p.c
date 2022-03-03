/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   moves_p.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:42:35 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/02/28 22:47:18 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	addfront(stack_b, (*stack_a)->data, (*stack_a)->index);
	tmp = (*stack_a)->next;
	(*stack_a)->next = 0;
	free(*stack_a);
	*stack_a = tmp;
	write(1, "pb\n", 3);
}

void	ft_pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	addfront(stack_a, (*stack_b)->data, (*stack_b)->index);
	tmp = (*stack_b)->next;
	(*stack_b)-> next = 0;
	free(*stack_b);
	*stack_b = tmp;
	write(1, "pa\n", 3);
}
