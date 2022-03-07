#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

node *front = NULL;
node *rear = NULL;

void enqueue(int item);
void print_queue(void);
void dequeue(void);
void print_front(void);
void print_rear(void);

void main()
{
    int item;
    int choice;

    while(1)
    {
        printf("\n.........................Queue using linked list.........................\n");
        printf("Enter your choice:-\n1. Enqueue.\n2. Dequeue.\n3. Print queue.\n4. Print front.\n5. Print rear\n6. Exit program\nChoice:- ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                printf("\n\tEnter data to enqueue: ");
                scanf("%d", &item);

                enqueue(item);

                break;
            }
            case 2:
            {
                printf("\nDequeuing Data.....");
                dequeue();

                break;
            }
            case 3:
            {
                printf("printing queue....\n");

                print_queue();

                break;
            }
            case 4:
            {
                print_front();
                break;
            }
            case 5:
            {
                print_rear();
                break;
            }
            case 6:
            {
                printf("\nProgram executed successfully...!\n");
                exit(0);

                break;
            }
            default:
            {
                printf("\nInvalid input...! Please, enter a valid option...!\n");
                break;
            }
        }
    }
}

void enqueue(int item)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    if(ptr == NULL)
    {
        printf("\nError, can not allocate memory...!\n");
        return;
    }
    else
    {
        ptr->data = item;
        if(front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;

            printf("\nData enqueued successfully...!\n");
            return;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
            printf("\nData enqueued successfully...!");
            return;
        }


    }
}
void dequeue(void)
{
    node *temp = NULL;

    if(front == NULL)
    {
        printf("\nThe queue is empty...!\n");
        return;
    }
    else
    {
        temp = front;
        front = front->next;
        free(temp);
        temp = NULL;

        printf("\nDequeed successfully...!\n");
        return;
    }
}
void print_queue(void)
{
    node *temp = NULL;
    temp = front;
    if(front == NULL)
    {
        printf("\nQueue is empty...!\n");
        return;
    }
    else
    {

        while(temp != NULL)
        {
            printf(" <= %d", temp->data);
            temp = temp->next;
        }
        return;
    }
}
void print_front(void)
{
    if(front == NULL)
    {
        printf("\nQueue is empty...!\n");
        return;
    }
    printf("\nRear is: %d\n", front->data);
    return;
}

void print_rear(void)
{
     if(rear == NULL)
    {
        printf("\nQueue is empty...!\n");
        return;
    }
    printf("\nRear is: %d\n", rear->data);
    return;
}