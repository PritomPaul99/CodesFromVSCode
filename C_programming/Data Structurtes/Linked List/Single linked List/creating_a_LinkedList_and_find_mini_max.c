#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;

struct Node
{
    int data;
    node *next;
};

node *head = NULL;

void create_list(int num);
void main()
{
    int item;
    int choice, n;

    printf("\n.............................Linked List: Create and find maximum & minimum value.............................\n");
    printf("Options:-\n1. Create a Linked list.\n2. Find Max value.\n3. Find Min Value.\n4. Print list.\n5. Exit program.\nPlease select yur choice:- ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("Please enter the number of nodes:");
        scanf("%d", &n);
        create_list(n);
        break;
    } default:
        break;
    }
}

void create_list(int num)
{
    node *new_node = (node *)malloc(sizeof(node));
    node *temp = NULL;
    int item;
    temp = head;
    if (new_node == NULL)
    {
        printf("Error! Unable to allocate memory.\n");
        return;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            printf("\nEnter data: ");
            scanf("%d", &item);
            new_node->data = item;

            if (head == NULL)
            {
                head = new_node;
                new_node = NULL;
            }
            else
            {
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = new_node;
                new_node->next = NULL;
            }
        }
        printf("\nData insserted successfully.\n");
        return;
    }
}
