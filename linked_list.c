/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:33:29 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/28 22:47:18 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*createt_node(int value, int index)
{
	t_node	*head;

	head = malloc(sizeof(t_node));
	head->data = value;
	head->index = index;
	head->next = NULL;
	return (head);
}

void	addback(t_node **list, int value, int index)
{
	t_node	*tmp;
	t_node	*new;

	new = createt_node(value, index);
	if (*list == NULL)
		*list = new;
	else
	{
		tmp = *list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}

void	addfront(t_node **list, int value, int index)
{
	t_node	*new;

	new = createt_node(value, index);
	new->next = *list;
	*list = new;
}
