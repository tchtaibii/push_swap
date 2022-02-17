#include <stdlib.h>
#include <stdio.h>

typedef struct node 
{
    int value;
    struct node * next;
} node;

void    creat_node(int value, node **head)
{
    node *last_node;
    node *tmp = malloc(sizeof(node));
    tmp->value = value;
    tmp->next = NULL;
    if (*head == NULL)
    {
        *head = tmp;
    }
    else
    {
        last_node = (*head);
        while (last_node->next != NULL)
        {
             last_node = last_node->next;
        }
        last_node->next = tmp;
    }
}
void printelement(node **head)
{
    node *tmp;
    tmp  = (*head);
    while (tmp != NULL)
    {
        printf("%d -> ",tmp->value);
        tmp = tmp->next;
    }  
}
int main()
{
    node *head;
    head = NULL;
    creat_node(45, &head);
    creat_node(65, &head);
    creat_node(61, &head);
    creat_node(63, &head);
    creat_node(61, &head);
    creat_node(67, &head);
    creat_node(69, &head);
    printelement(&head);
}