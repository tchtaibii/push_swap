/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_norm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 02:15:14 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/03/01 03:01:38 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_4_v1(t_node **stack_a, t_node **stack_b)
{
	ft_sa(stack_a);
	if (!ft_sort_deja(*stack_a))
	{
		ft_pb(stack_a, stack_b);
		ft_sort_3(stack_a);
		ft_pa(stack_a, stack_b);
	}
}

void	ft_sort_4_v2(t_node **stack_a, t_node **stack_b)
{
	ft_rra(stack_a);
	ft_rra(stack_a);
	if (!ft_sort_deja(*stack_a))
	{
		ft_pb(stack_a, stack_b);
		ft_sort_3(stack_a);
		ft_pa(stack_a, stack_b);
	}
}

void	ft_sort_4_v3(t_node **stack_a, t_node **stack_b)
{
	ft_rra(stack_a);
	if (!ft_sort_deja(*stack_a))
	{
		ft_pb(stack_a, stack_b);
		ft_sort_3(stack_a);
		ft_pa(stack_a, stack_b);
	}
}
