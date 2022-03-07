#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    node *left;
    node *right;
};
node *root = NULL;

void insert_data(int item);

void main()
{
    int item;
    int choice;

    while(1)
    {
        printf("\n..........................Binary Search Tree..........................\n");
        printf("Please Enter your choice:-\n1. Insert Data.\n2. Delete Data\n3. Exit.\nChoce:- ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("\n\tPlease enter the data: ");
                scanf("%d", &item);

                insert_data(item);
                break;
            }
            /*
            case 2:
            {

            }*/
            case 3:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("\nInvalid choice! Please enter the valid choice...\n");
            }
        }
    }
}

void insert_data(int item)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    node *parent;

    ptr->data = item;
    ptr->left = NULL;
    ptr->right = NULL;

    parent = root;
    if(root == NULL)
    {
        root = ptr;
        printf("\nData inserted successfully.\n");

        return;
    }
    else
    {
        node *current;
        parent = current;
        
        current = root;
        while(current)
        {
            if(ptr->data > current->data)
            {
                current = current->right;
            }
            else
            {
                current = current->left;
            }
        }
        if(ptr->data > parent->data)
        {
            parent->right = ptr;
        }
        else
        {
            parent->left = ptr;
        }
        printf("Data inserted successfully.\n");
    }
}