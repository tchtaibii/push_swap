/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_sort_and_index.c								:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 22:32:06 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/02/28 22:47:18 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_and_index(t_node **stack_a)
{
	int		*tab;
	int		i;
	int		nb;
	t_node	*tmp;

	i = 0;
	tmp = *stack_a;
	nb = ft_linkedlen(*stack_a);
	tab = malloc(sizeof(int) * nb);
	while (tmp != NULL)
	{
		tab[i] = tmp->data;
		i++;
		tmp = tmp->next;
	}
	ft_sort_table(tab, nb);
	ft_index_stack(stack_a, tab, nb);
	free(tab);
}
