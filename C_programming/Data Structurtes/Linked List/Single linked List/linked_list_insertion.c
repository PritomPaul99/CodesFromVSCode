#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

node *head = NULL;

//functions
void insert_at_beginning(int item);
void insert_at_last(int item);
void insert_at_middle(int item);
void print_list(void);
//******************************
int main()
{
    int item;
    int choice;

    while(1)
    {
        printf("\n...................................Linked List Insertion...................................\n");
        printf("Enter your choice:-\n1. Insert at the biginning.\n2. Insert at the last.\n3. Insert in the list.\n4. print List.\n5. Exit.\nyour choice:- ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                printf("Emter data to insert at BEGINNING:- ");
                scanf("%d", &item);
                insert_at_beginning(item);
                break;
            }
            case 2:
            {
                printf("Enter data to insert at the LAST:- ");
                scanf("%d", &item);
                insert_at_last(item);
                break;
            }
            case 3:
            {
                printf("Enter data to insert in the list:- ");
                scanf("%d", &item);
                insert_at_middle(item);
                break;
            }
            case 4:
            {
                printf("The Linked is:-\n");
                print_list();
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("\nError!!! Please select the currect option. :)\n");
                break;
            }
        }
        printf("\n\n");
    }
}

void insert_at_beginning(int item)
{
    node *ptr = (node *)malloc(sizeof(node));
    if(ptr == NULL)
    {
        printf("\nMemory could not allocated...!\n");
    }
    else
    {
        ptr->data = item;
        if(head ==NULL)
        {
            head = ptr;
            head->next = NULL;
            printf("\nData added to the beginning of the list.\n");
            return;
        }
        else
        {
            ptr->next = head;
            head = ptr;
            printf("\nData added to the beginning of the list.\n");
        return;
        }
    }
}

void insert_at_last(int item)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *temp = (node *) malloc(sizeof(node));
    if(ptr == NULL)
    {
        printf("Error! Could not allocate memory...!!!\n");
    }
    else
    {
        ptr->data = item;
        if(head == NULL)
        {
            head = ptr;
            head->next = NULL;
            printf("\nData inserted at the end of the list.\n");
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
            printf("\nData inserted at the end of the list.\n");
            return;
        }
    }
}

void print_list(void)
{
    node *temp = (node *)malloc(sizeof(node));
    if(head == NULL)
    {
        printf("\nThe List is empty. Please, insert data.\n");
    }
    printf("\nData ::: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d --> ", temp->data);

        temp = temp->next;
    }
    printf("NULL");
    return;
}

void insert_at_middle(int item)
{
    int pos;
    node *ptr = (node *)malloc(sizeof(node));
    node *temp = (node *)malloc(sizeof(node));
    if(ptr == NULL)
    {
        printf("\nError! Couldn't allocate memory...!\n");
    }
    else
    {
        ptr->data = item;
        printf("Enter the position, after where you want to insert the data:- ");
        scanf("%d", &pos);
        temp = head;
        for(int i=0; i<pos; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\nError! Try again...!\n");
                return;
            }
            else
            {
                ptr->next = temp->next;
                temp->next = ptr;
                printf("\nData inserted on the link.\n");
                return;
            }
        }
    }
    
}