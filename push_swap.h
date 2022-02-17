#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int *stack_A;
int *stack_B;
int c;

int		table_counter(int *table);
int		ft_atoi(char *str);
int		ft_dgts_check(char **str);
int		ft_double_check(int *table);
int		*ft_sa(int *table);
int		*ft_sb(int *table);
int		*ft_pa();
int		*ft_pb();
void	ft_increase_a();

#endif