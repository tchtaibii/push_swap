#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int	data;
	struct node *next;
	
}	node;

node	*createnode(int value)
{
	node *temp;

	temp = malloc(sizeof(node));
	temp->data = value;
	temp->next = NULL;
	return (temp);
}
node *creat_head(node *nodet, struct node *head)
{
	nodet->next = head;
	head = nodet;
	return (head);
}

void addnode(int value)
{
	node	*temp;
	node	*p;
	node *head;

	temp = createnode(value);
	head = creat_head(temp, head);
	p = head;
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
	
}

int main()
{
	addnode(45);
	addnode(452);
}