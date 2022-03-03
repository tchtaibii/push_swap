/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   moves_rr.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:43:50 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/02/28 22:47:18 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_node **stack_a)
{
	t_node	*tmp;
	int		value;
	int		index;

	tmp = *stack_a;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	value = tmp->next->data;
	index = tmp->next->index;
	free(tmp->next);
	tmp->next = NULL;
	addfront(stack_a, value, index);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_node **stack_b)
{
	t_node	*tmp;
	int		value;
	int		index;

	tmp = *stack_b;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	value = tmp->next->data;
	index = tmp->next->index;
	free(tmp->next);
	tmp->next = NULL;
	addfront(stack_b, value, index);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_node **stack_a, t_node **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
	write(1, "rrr\n", 4);
}
