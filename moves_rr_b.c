/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   moves_rr_b.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:43:50 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/02 22:10:05 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra_b(t_node **stack_a)
{
	t_node	*tmp;
	int		value;
	int		index;

	if (ft_linkedlen(*stack_a) > 1)
	{
		tmp = *stack_a;
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		value = tmp->next->data;
		index = tmp->next->index;
		free(tmp->next);
		tmp->next = NULL;
		addfront(stack_a, value, index);
	}
}

void	ft_rrb_b(t_node **stack_b)
{
	t_node	*tmp;
	int		value;
	int		index;

	if (ft_linkedlen(*stack_b) > 1)
	{
		tmp = *stack_b;
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		value = tmp->next->data;
		index = tmp->next->index;
		free(tmp->next);
		tmp->next = NULL;
		addfront(stack_b, value, index);
	}
}

void	ft_rrr_b(t_node **stack_a, t_node **stack_b)
{
	ft_rra_b(stack_a);
	ft_rrb_b(stack_b);
}
