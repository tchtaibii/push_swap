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

void	main3(t_node *stack_a, t_node *stack_b, char *str)
{
	if (!ft_strncmp(str, "ss\n"))
		ft_ss_b(&stack_a, &stack_b);
	else if (!ft_strncmp(str, "ra\n"))
		ft_ra_b(&stack_a);
	else if (!ft_strncmp(str, "rb\n"))
		ft_rb_b(&stack_b);
	else if (!ft_strncmp(str, "rr\n"))
		ft_rr_b(&stack_a, &stack_b);
	else if (!ft_strncmp(str, "rra\n"))
		ft_rra_b(&stack_a);
	else if (!ft_strncmp(str, "rrb\n"))
		ft_rrb_b(&stack_b);
	else if (!ft_strncmp(str, "rrr\n"))
		ft_rrr_b(&stack_a, &stack_b);
	else
		ft_exit();
}

void	main2(t_node *stack_a, t_node *stack_b, char *str)
{
	if (!ft_strncmp(str, "pa\n"))
		ft_pa_b(&stack_a, &stack_b);
	else if (!ft_strncmp(str, "pb\n"))
		ft_pb_b(&stack_a, &stack_b);
	else if (!ft_strncmp(str, "sa\n"))
		ft_sa_b(&stack_a);
	else if (!ft_strncmp(str, "sb\n"))
		ft_sb_b(&stack_b);
	else
		main3(stack_a, stack_b, str);
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	*str;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		if (!ft_dgts_check(av))
			return (0);
		stack_a = ft_stock_st_a(ac, av, stack_a);
		if (!ft_double_check(stack_a))
			return (0);
		str = get_next_line(0);
		while (str)
		{
			main2(stack_a, stack_b, str);
			str = get_next_line(0);
		}
		if (ft_sort_deja(stack_a) && !ft_linkedlen(stack_b))
			ft_ok();
		else
			ft_ko();
	}
}
