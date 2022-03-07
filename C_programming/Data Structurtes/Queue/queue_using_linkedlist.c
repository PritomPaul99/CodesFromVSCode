#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

node *front, *rear;

void enqueue(int item);
void print_queue(void);

void main()
{
    int item;
    int choice;

    while(1)
    {
        printf("\n.........................Queue using linked list.........................\n");
        printf("E,nter your choice:-\n1. Enqueue.\n2. Dequeue.\n3. Print queue.\n4. Exit program\nChoice:- ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                printf("\n\tEnter data to enqueue: ");
                scanf("%d", &item);

                enqueue(item);

                break;
            }/*
            case 2:
            {
                printf("\nDequeuing Data.....");
                dequeue();

                break;
            }*/
            case 3:
            {
                printf("printing queue....\n");

                print_queue();

                break;
            }
            case 4:
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
    ptr = 
}