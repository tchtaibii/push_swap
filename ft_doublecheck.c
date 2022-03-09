/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_doublecheck.c								   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/28 21:52:33 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/02 02:29:56 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_deja(t_node *stack_a)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (stack_a)
	{
		tmp = stack_a;
		tmp2 = stack_a->next;
		while (tmp2 != NULL)
		{
			tmp = stack_a;
			while (tmp != tmp2)
			{
				if (tmp->data > tmp2->data)
					return (0);
				tmp = tmp->next;
			}
			tmp2 = tmp2->next;
		}
		return (1);
	}
	return (0);
}

int	ft_double_check(t_node *stack_a)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = stack_a;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		while (tmp2 != NULL)
		{
			if (tmp2->data == tmp->data)
			{
				write(2, "Error\n", 6);
				return (0);
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	if (ft_sort_deja(stack_a))
		return (0);
	return (1);
}

int	ft_double_check_b(t_node *stack_a)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = stack_a;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		while (tmp2 != NULL)
		{
			if (tmp2->data == tmp->data)
			{
				write(2, "Error\n", 6);
				return (0);
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (1);
}
