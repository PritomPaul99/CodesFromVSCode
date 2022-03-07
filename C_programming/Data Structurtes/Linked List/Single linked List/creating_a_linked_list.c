//insert at the last of the list...

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void printlist(struct node *temp);
int main()
{
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next= NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 20;
    current->next = NULL;
    head->next = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 30;
    current->next = NULL;
    head->next->next = current;

    struct node *temp = head;

    printlist(head);

    return 0;
}

void printlist(struct node *temp)
{
    int count = 0;
    printf("The list is:\n");
    while(temp != NULL)
    {
        printf("%d ---> ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nTotal node is %d", count);
}