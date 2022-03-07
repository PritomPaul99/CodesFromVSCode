#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

node *head = NULL;

void insert_at_beg(int item);
void insert_at_last(int item);
void print_list(void);

int main()
{
    int choice;

    while (1)
    {
        printf("\n.............................LINKED LIST.............................\n");
        printf("Enter your choice:\n1. Insert at beginning.\n2. Insert at last\n5. Print List.(Traverse List)\n6. Exit.\nChoice:- ");
        scanf("%d", &choice);

        int item;

        switch (choice)
        {
        case 1:
        {
            printf("Enter the item to insert at beginning: ");
            scanf("%d", &item);

            insert_at_beg(item);

            break;
        }
        case 2:
        {
            printf("Enter the item to insert at the end: ");
            scanf("%d", &item);

            insert_at_last(item);

            break;
        }
        case 5:
        {
            print_list();
            break;
        }
        case 6:
        {
            printf("\n\n\nGood bye.\n\n\n");
            exit(0);
        }
        default:
        {
            printf("Invalid input...!!!\n\n\n");
            break;
        }

        
        }
    }
}

void insert_at_beg(int item)
{
    node *ptr = (node *)malloc(sizeof(node));

    if (ptr == NULL)
    {
        printf("Overflow...!\n\n\n");
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            head->next = NULL;
            printf("%d inserted at the end of last..\n\n\n", ptr->data);
            return;
        }
        else
        {
            ptr->next = head;
            head = ptr;

            printf("%d inserted at the end of last...\n\n\n", ptr->data);

            return;
        }
    }
}

void insert_at_last(int item)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *temp = (node *)malloc(sizeof(node));

    if(ptr == NULL)
    {
        printf("Overflow...!!!\n\n\n");
    }
    else
    {
        ptr->data = item;
        if(head == NULL)
        {
            head = ptr;
            head->next = NULL;
            printf("%d is inserted at the end of the list.(Head was NULL)\n\n\n", head->data);
            return;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;

            printf("%d is inserted at the end of the list.\n\n\n", temp->data);
            return;
        }
    }
}

void print_list()
{
    if(head == NULL)
    {
        printf("The List is empty..\n\n\n");
    }
    node *temp = (node *)malloc(sizeof(node));

    temp = head;
    while(temp != NULL)
    {
        printf("%d ---> ", temp->data);
        temp = temp->next;
    }
}