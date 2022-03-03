/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_indexing.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:31:30 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/02/28 22:47:18 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index_stack(t_node **stack_a, int *tab, int nb)
{
	int		i;
	t_node	*tmp;

	tmp = *stack_a;
	i = 0;
	while (i < nb)
	{
		tmp = *stack_a;
		while (tmp)
		{
			if (tmp->data == tab[i])
			{
				tmp->index = i;
				break ;
			}
			tmp = tmp->next;
		}
		i++;
	}
}
