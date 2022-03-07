/*
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print_list(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d --> ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = NULL;
    struct node *first_node = NULL;
    struct node *second_node = NULL;
    struct node *third_node = NULL;
    struct node *fourth_node = NULL;

    first_node = (struct node *)malloc(sizeof(struct node));
    second_node = (struct node *)malloc(sizeof(struct node));
    third_node = (struct node *)malloc(sizeof(struct node));
    fourth_node = (struct node *)malloc(sizeof(struct node));

    head = first_node;

    first_node->data = 1;
    first_node->next = second_node;

    second_node->data = 2;
    second_node->next = third_node;
    
    third_node->data = 3;
    third_node->next = fourth_node;

    fourth_node->data = 4;
    fourth_node->next = NULL;
    
    print_list(head);
}*/

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE node;
struct NODE
{
    int data;
    node *next;
};

node *head = NULL;

void print_list(node *item)
{
    printf("The Linked list is:-\n");
    while(item != NULL)
    {
        printf("%d --> ", item->data);
        item = item->next;
    }
}

int main()
{
    node *first = NULL;
    node *second = NULL;
    node *third = NULL;

    first = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));

    head = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
    print_list(head);

    return 0;
}