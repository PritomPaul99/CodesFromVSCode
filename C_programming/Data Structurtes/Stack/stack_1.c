#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int size = 10;
int stack[10];
int top = -1;
bool is_full();
bool is_empty();
void push(int item);
int pop(void);
int print_stack(void);

void main()
{
    int item;
    int ch;

    while (1)
    {
        printf("\n..............................Stack..............................\n");
        printf("Enter your choice:-\n");
        printf("1. Push.\n");
        printf("2. Pop.\n");
        printf("3. Print stack.\n");
        printf("4. Print top.\n");
        printf("5. Exit.\n");
        printf("Choice:- ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n\tEnter data: ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            print_stack();
            break;
        case 4:
            printf("The top is: %d", stack[top]);
            break;
        case 5:
            printf("\nExited...!\n");
            exit(0);
            break;         
        default:
            printf("Enter valid option...!");
            break;
        }
    }
    
}
bool is_full()
{
    if (top >= size)
    {
        printf("\nStack overflaw...!\n");
        return false;
    }
    else
    {
        return true;
    }
}
bool is_empty()
{
    if (top == -1)
    {
        printf("\nStack underflaw...!\n");
        return false;
    }
    else
    {
        return true;
    }
}

void push(int item)
{
    if (!is_full())
    {
        return;
    }
    else
    {
        top++;
        stack[top] = item;
        printf("\n%d pushed...\n", stack[top]);
        return;
    }
}

int pop(void)
{
    if (!is_empty())
    {
        return 0;
    }
    else
    {
        int temp;
        temp = stack[top];
        top--;
        printf("\n%d poped...\n", temp);
        return 0;
    }
}
int print_stack(void)
{
    int temp;
    while (!is_empty())
    {
        printf("%d\n", pop());
    }
    return 0;
    
}