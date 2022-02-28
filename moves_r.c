/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:43:19 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/28 22:47:18 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_node **stack_a)
{
	t_node	*tmp;

	addback(stack_a, (*stack_a)->data, (*stack_a)->index);
	tmp = (*stack_a)->next;
	free(*stack_a);
	*stack_a = tmp;
	write(1, "ra\n", 3);
}

void	ft_rb(t_node **stack_b)
{
	t_node	*tmp;

	addback(stack_b, (*stack_b)->data, (*stack_b)->index);
	tmp = (*stack_b)->next;
	free(*stack_b);
	*stack_b = tmp;
	write(1, "rb\n", 3);
}

void	ft_rr(t_node **stack_a, t_node **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
	write(1, "rr\n", 3);
}
