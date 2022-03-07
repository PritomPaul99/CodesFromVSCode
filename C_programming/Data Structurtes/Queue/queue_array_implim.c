#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int front = -1;
int rear = -1;

#define SIZE 100
int arr[SIZE];

bool is_empty(void)
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty...!\n");
        return false;
    }
    return true;
}
bool is_full(void)
{
    if (rear >= SIZE - 1)
    {
        printf("\nQueue is full...!\n");
        return false;
    }
    return true;
}
void enqueue(int item)
{
    if(!is_full())
    {
        return;
    }
    else
    {
         if(front == -1)
         {
             front = 0;
         }
         rear = rear + 1;
         arr[rear] = item;
         printf("Data inswerted.\n");
         return;
    }
}
int deque()
{
    if(!is_empty())
    {
        printf("\nQueue is empty...!\n");
        return 0;
    }
    else
    {
        printf("\nDequeued: %d...!\n", arr[front]);
        front++;
        if (front>rear)
         {
             front = rear = -1;
             printf("\nThe queue is currently empty...!\n");
         }
         return 0;
    }   
}
void print_queue()
{
    if(front == -1 && rear == -1)
    {
        printf("\nList is empty....\n\n");
        return;
    }
    for (int i = front; i < rear; i++)
    {
        printf("%d -> ", arr[i]);
    }
    return;
}
void main()
{
    int item;
    int ch;

    while (1)
    {
        printf("Enter choice:-\n");
        printf("1. Enqueue.\n");
        printf("2. Dequeue.\n");
        printf("3. Is empty?.\n");
        printf("4. Is full?\n");
        printf("5. Print queue.\n");
        printf("6. Print rear.\n");
        printf("7. Exit.\n");
        printf("Choice:- ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter data:- ");
            scanf("%d", &item);
            enqueue(item);
            printf("\n");
            break;
        case 2:
            printf("decueuing data...\n");
            deque();
            break;
        case 5:
            print_queue();
            break;
        case 7:
            printf("\nExiting....!\n");
            exit(0);
            break;
        default:
            printf("\nEnter a valid input...!\n");
            break;
        }
    }
    
}