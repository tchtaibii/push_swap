#include "push_swap.h"

node	*createnode(int value, int index)
{
	node	*head;

	head = malloc(sizeof(node));
	head->data = value;
	head->index = index;
	head->next = NULL;
	return head;
}

void addback(node **list, int value, int index)
{
	node *tmp;
	node *new;

	new = createnode(value, index);
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

void addfront(node **list, int value, int index)
{
	node *new;

	new = createnode(value, index);
	new->next = *list;
	*list = new;
}

// int main()
// {
//	 node *list;

//	 list = NULL;
//	 addback(&list, 12);
//	 addback(&list, 18);

//	 while (list)
//	 {
//		 printf(" -> %d", list->data);
//		 list = list->next;
//	 }
// }
