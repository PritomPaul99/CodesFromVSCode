#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

node *head = NULL;

/************************************************************************************************************************/
void print_list(void);
void insert_last(int item);
void reverse_list(void);
/************************************************************************************************************************/

int main()
{
    int ch;
    int item;
    int i, num; //for loops and node number

    while (1)
    {
        printf("\n........................Linked List........................\n");
        printf("Options:\n");
        printf("1. Create a linked List\n");
        printf("2. Insert at last.\n");
        printf("3. Reverse List.\n");
        printf("99. Print List.\n");
        printf("00. Exit the program.\n");
        printf("Please, enter your choice: ");
        scanf("%i", &ch);

        switch (ch)
        {
        case 1:
        {
            printf("Create a Linked List...\n");
            printf("Enter the number of nodes: ");
            scanf("%d", &num);
            for (i = 0; i < num; i++)
            {
                printf("\n\tEnter %dth data: ", i + 1);
                scanf("%d", &item);
                insert_last(item);
            }
            break;
        }
        case 2:
        {
            printf("\tEnter data to inser at last: ");
            scanf("%d", &item);
            insert_last(item);
            break;
        }
        case 3:
        {
            printf("Reversing List............");
            reverse_list();
            break;
        }
        case 99:
        {
            printf("Printing list............");
            print_list();
            break;
        }
        case 00:
        {
            printf("\nExiting program...\n\n");
            exit(0);
            break;
        }

        default:
        {
            printf("Invalid Inpur! Enter valid input!\n");
            break;
        }
        }
    }
}

void insert_last(int item)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *temp;
    if (ptr == NULL)
    {
        printf("Memory Error...!!!");
        return;
    }
    else
    {
        ptr->data = item; //head
        temp = head;      // a -> b -> c -> d -> e -> NULL
        if (head == NULL)
        {
            head = ptr;
            head->next = NULL;
            printf("\tData inserted!\n");
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            temp->next->next = NULL;
            printf("\n\tData inserted!\n");
            return;
        }
    }
}

void print_list(void)
{
    node *temp = head;

    if (head == NULL)
    {
        printf("\nEmpty List!\n");
        return;
    }
    else
    {
        printf("\n\nData:: ");
        while (temp != NULL)
        {
            printf("%d ==> ", temp->data);
            temp = temp->next;
        }
        printf("|_______|\n\n");
        return;
    }
}

void reverse_list()
{
    printf("1\n");
    node *ptr = head;
    printf("2\n");
    node *temp = NULL;
    printf("3\n");
    node *prev = NULL;

    if (head == NULL || head->next == NULL)
    {
        printf("\nList is empty or had only one node!\n");
        return;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = temp;
        }
        head = prev;
        printf("List reversed....\n");
        print_list();
        return;
    }
}