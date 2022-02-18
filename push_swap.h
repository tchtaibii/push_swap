#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>


typedef struct node
{
    int data;
    struct node *next;
    
}   node;

int		table_counter(int *table);
int		ft_atoi(char *str);
int		ft_dgts_check(char **str);
int		ft_double_check(node *stack_A);
node    *createnode(int value);
void	addback(node **list, int value);
void	addfront(node **list, int value);
void    ft_sa(node *stack_A);
void	ft_ss(node *stack_A, node *stack_B);
void    ft_pb(node **stack_A, node **stack_B);
void    ft_pa(node **stack_A, node **stack_B);

#endif