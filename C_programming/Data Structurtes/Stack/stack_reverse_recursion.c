#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

node *top = NULL;

void push_data(int item);
void pop_data(void);
void print_reverse(node *top);
void print_stack(void);

void main()
{
    int item;
    int choice;

    while (1)
    {
        printf("\n............................Stack using Linked List............................");
        printf("Enter your choice:-\n1. Push data.\n2. Pop data.\n3. Print stack.\n5. Reverse Stack.\n4. Exit program.\nChoice:- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\n\tEnter data:- ");
            scanf("%d", &item);

            push_data(item);

            break;
        }
        case 2:
        {
            printf("\nPoping data....");

            pop_data();

            break;
        }
        case 3:
        {
            printf("Printing stack....\n");

            print_stack();

            break;
        }
        case 4:
        {
            printf("\nPrinting stack in reverse: \n");
            print_reverse(top);

            break;
        }
        case 5:
        {
            printf("\nProgram successfully exicuted.\n");
            exit(0);
            break;
        }
        default:
        {
            printf("\nInvalid option...! Please, enter valid option...!\n");
            break;
        }
        }
    }
}

void push_data(int item)
{
    node *ptr = (node *)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("Could not allocate memory....!!!\n");
        return;
    }
    else
    {
        ptr->data = item;
        ptr->next = NULL;
        if (top == NULL)
        {
            top = ptr;
            top->next = NULL;

            printf("\nData pushed successfully...!\n");

            return;
        }
        else
        {
            ptr->next = top;
            top = ptr;

            printf("\nData successfully pushed...!\n");

            return;
        }
    }
}

void pop_data(void)
{
    node *temp = NULL;
    temp = top;
    if (top == NULL)
    {
        printf("\nStack is already empty...!\n");
        return;
    }
    else
    {
        top = temp->next;
        free(temp);
        temp = NULL;
        printf("\nData poped successfully.\n");
        return;
    }
}

void print_top(void)
{
    if (top == NULL)
    {
        printf("\nStack is already empty...!!!\n");
        return;
    }
    printf("\ntop is: %d\n", top->data);
    return;
}
void print_stack(void)
{
    node *temp = NULL;

    temp = top;

    if (top == NULL)
    {
        printf("\nStack is empty...!!!\n");
        return;
    }
    else
    {
        printf("\nTop is: %d\n\n", temp->data);

        while (temp != NULL)
        {
            printf("%d\n", temp->data);

            temp = temp->next;
        }
        return;
    }
}
void print_reverse(node *top)
{
    
    if (top == NULL)
    {
        return;
    }

    print_reverse(top->next);

    printf("%d\n", top->data);
}