/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   some_tools.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/01 03:17:22 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/01 03:22:34 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

int	ft_search_min_of_range(t_node *stack_a, int min, int max)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		if (stack_a->index >= min && stack_a->index <= max)
			return (i);
		i++;
		stack_a = stack_a->next;
	}
	return (0);
}

int	ft_linkedlen(t_node *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

void	ft_sort_table(int *tab, int size)
{
	int		i;
	int		j;
	int		swap;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	search_place_index(int index, t_node *stack_b)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = stack_b;
	while (temp)
	{
		if (temp->index == index)
			break ;
		temp = temp->next;
		i++;
	}
	return (i);
}
