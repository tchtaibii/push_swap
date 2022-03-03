/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   bonus.h											:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/01 23:22:59 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/02 22:13:04 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "push_swap.h"

char	*ft_substr(char *str, int start, int len);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
int		ft_strlen(char *str);
int		check_new_line(char *str);
int		ft_strncmp(char *s1, char *s2);
int     ft_double_check_b(t_node *stack_a);
void	ft_sa_b(t_node **stack_a);
void	ft_sb_b(t_node **stack_b);
void	ft_ss_b(t_node **stack_a, t_node **stack_b);
void	ft_pb_b(t_node **stack_a, t_node **stack_b);
void	ft_pa_b(t_node **stack_a, t_node **stack_b);
void	ft_ra_b(t_node **stack_a);
void	ft_rb_b(t_node **stack_b);
void	ft_rr_b(t_node **stack_a, t_node **stack_b);
void	ft_rra_b(t_node **stack_a);
void	ft_rrb_b(t_node **stack_b);
void	ft_rrr_b(t_node **stack_a, t_node **stack_b);
void	ft_ko(void);
void	ft_ok(void);

#endif