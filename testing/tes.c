#include <stdlib.h>
#include <stdio.h>

node    *createnode(int value)
{
    node    *head;

    head = malloc(sizeof(node));
    head->data = value;
    head->next = NULL;
    return head;
}

void addback(node **list, int value)
{
    node *tmp;
    node *new;

    new = createnode(value);
    if (list == NULL)
    {
        *list = new;
        list->next = NULL;
    }
    else
    {
        tmp = *list;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
}

void addfront(node **list, int value)
{
    node *new;

    new = createnode(value);
    new->next = *list;
    *list = new;
}

int main()
{
    node *list;

    list = createnode(6);
    addback(&list, 12);
    addback(&list, 18);

    while (list)
    {
        printf(" -> %d", list->data);
        list = list->next;
    }
    
}