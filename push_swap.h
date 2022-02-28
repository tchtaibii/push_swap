/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:46:14 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/28 22:49:30 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct node
{
	int				data;
	int				index;
	struct t_node	*next;
}	t_node;

t_node	*createt_node(int value, int index);
t_node	*ft_stock_st_a(int ac, char **av, t_node *stack_a);
void	ft_push_back_to_a(t_node **a, t_node **b, int k);
void	addback(t_node **list, int value, int index);
void	addfront(t_node **list, int value, int index);
void	ft_sa(t_node **stack_a);
void	ft_sb(t_node **stack_b);
void	ft_ss(t_node **stack_a, t_node **stack_b);
void	ft_pb(t_node **stack_a, t_node **stack_b);
void	ft_pa(t_node **stack_a, t_node **stack_b);
void	ft_ra(t_node **stack_a);
void	ft_rb(t_node **stack_b);
void	ft_rr(t_node **stack_a, t_node **stack_b);
void	ft_rra(t_node **stack_a);
void	ft_rrb(t_node **stack_b);
void	ft_rrr(t_node **stack_a, t_node **stack_b);
void	ft_sort_2(t_node **stack_a);
void	ft_sort_3(t_node **stack_a);
void	ft_sort_4(t_node **stack_a, t_node **stack_b);
void	ft_sort_5(t_node **stack_a, t_node **stack_b);
void	ft_index_stack(t_node **stack_a, int *tab, int nb);
void	ft_sort_and_index(t_node **stack_a);
void	ft_sort_table(int *tab, int nb);
void	sort_100(t_node **stack_a, t_node **stack_b);
int		ft_find_min(t_node *stack_a);
int		table_counter(int *table);
int		ft_atoi(char *str);
int		ft_dgts_check(char **str);
int		ft_double_check(t_node *stack_a);
int		ft_sort_deja(t_node *stack_a);
int		ft_find_index_min(t_node *stack_a, int value);
int		ft_min_of_stack(t_node *stack_a);
int		ft_linkedlen(t_node *stack);
int		ft_search_min_of_range(t_node *stack_a, int min, int max);

#endif