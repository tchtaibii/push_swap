/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:48:29 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/28 22:49:54 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_stock_st_a(int ac, char **av, t_node *stack_a)
{
	int	i;

	i = 1;
	(void)ac;
	while (av[i])
	{
		addback(&stack_a, ft_atoi(av[i]), 0);
		i++;
	}
	return (stack_a);
}

int	ft_min_of_stack(t_node *stack_a)
{
	int		min;
	t_node	*tmp;

	tmp = stack_a;
	min = tmp->index;
	while (tmp)
	{
		if (min > tmp->index)
			min = tmp->index;
		tmp = tmp->next;
	}
	return (min);
}
