/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   bns.c										     	:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/01 23:22:35 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/02 22:14:12 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "bonus.h"

t_node	*split_args(char **av, int ac, char **str, t_node *stack_a)
{
	int	i;
	int	j;

	i = 1;
	(void)ac;
	while (av[i])
	{
		str = ft_split(av[i], ' ');
		if (!ft_dgts_check(str))
			return (0);
		stack_a = ft_stock_st_a(str, stack_a, 0);
		j = 0;
		while (str[j])
		{
			free(str[j]);
			j++;
		}
		free(str);
		i++;
	}
	return (stack_a);
}

void	main2(t_node **stack_a, t_node **stack_b, char *str)
{
	if (!ft_strncmp(str, "pa\n"))
		ft_pa_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "pb\n"))
		ft_pb_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "sa\n"))
		ft_sa_b(stack_a);
	else if (!ft_strncmp(str, "sb\n"))
		ft_sb_b(stack_b);
	else if (!ft_strncmp(str, "ss\n"))
		ft_ss_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "ra\n"))
		ft_ra_b(stack_a);
	else if (!ft_strncmp(str, "rb\n"))
		ft_rb_b(stack_b);
	else if (!ft_strncmp(str, "rr\n"))
		ft_rr_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "rra\n"))
		ft_rra_b(stack_a);
	else if (!ft_strncmp(str, "rrb\n"))
		ft_rrb_b(stack_b);
	else if (!ft_strncmp(str, "rrr\n"))
		ft_rrr_b(stack_a, stack_b);
	else
		ft_exit();
}

void	main3(t_node *stack_a, t_node *stack_b)
{
	if (ft_sort_deja(stack_a) && !ft_linkedlen(stack_b))
		ft_ok();
	else
		ft_ko();
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	*str;
	char	**s;

	stack_a = NULL;
	stack_b = NULL;
	s = NULL;
	if (ac > 1)
	{
		stack_a = split_args(av, ac, s, stack_a);
		if (!ft_double_check_b(stack_a))
			return (0);
		str = get_next_line(0);
		while (str)
		{
			main2(&stack_a, &stack_b, str);
			free(str);
			str = get_next_line(0);
		}
		free(str);
		main3(stack_a, stack_b);
	}
}
