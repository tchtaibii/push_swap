#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>


typedef struct node
{
    int data;
    int index;
    struct node *next;
    
}   node;

node    *createnode(int value);
node    *ft_stock_stA(int ac, char **av, node *stack_A);
void	addback(node **list, int value);
void	addfront(node **list, int value);
void    ft_sa(node **stack_A);
void	ft_ss(node *stack_A, node *stack_B);
void    ft_pb(node **stack_A, node **stack_B);
void    ft_pa(node **stack_A, node **stack_B);
void    ft_ra(node **stack_A);
void    ft_rb(node **stack_B);
void    ft_rr(node **stack_A, node **stack_B);
void    ft_rra(node **stack_A);
void    ft_rrr(node **stack_A, node **stack_B);
void    ft_sort_2(node **stack_A);
void    ft_sort_3(node **stack_A);
void    ft_sort_4(node **stack_A, node **stack_B);
void    ft_sort_5(node **stack_A, node **stack_B);
void    ft_sort_100(node **stack_A, node **stack_B, int nb);
void    ft_index_stack(node **stack_A, int *tab, int nb);
int     ft_find_min(node *stack_A);
int		table_counter(int *table);
int		ft_atoi(char *str);
int		ft_dgts_check(char **str);
int		ft_double_check(node *stack_A);
int     ft_sort_deja(node *stack_A);
int     ft_find_index_min(node *stack_A, int value);

#endif