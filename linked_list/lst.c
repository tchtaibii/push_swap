typedef struct node
{
	int				data;
	struct node	*next;
}	node;

node	*ft_lstnew(int value)
{
	node tmp;
	tmp = malloc(sizeof(node));
	tmp->data = value;
	tmp->next = NULL;
	return (tmp);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	
}