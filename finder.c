/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   finder.c										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:22:57 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/02/28 22:47:18 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index_min(t_node *stack_a, int value)
{
	t_node	*tmp;
	int		index;

	tmp = stack_a;
	index = 0;
	while (tmp)
	{
		if (tmp->index == value)
			return (index);
		index++;
		tmp = tmp->next;
	}
	return (index);
}

int	ft_find_min(t_node *stack_a)
{
	int		i;
	t_node	*tmp;

	i = stack_a->index;
	tmp = stack_a;
	while (tmp)
	{
		if (i > tmp->index)
			i = tmp->index;
		tmp = tmp->next;
	}
	i = ft_find_index_min(stack_a, i);
	return (i);
}
