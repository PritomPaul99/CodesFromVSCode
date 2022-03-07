#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

node *head = NULL;
//******************
void insert_at_beg(int item);
void insert_at_end(int item);
void insert_in_middle(int item);
void print_list(void);
void search_data(void);
//******************
void main()
{
    int item, choice;

    while (1)
    {
        printf("\n...............................LINKED LIST INSERTION AND SEARCH...............................\n");
        printf("Opions are:-\n1. Insert at beginning.\n2. Insert at the endd.\n3. Insert at middle.\n4. Print List.\n5. Search in the list.\n6. Exit program\nEnter the choice:- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\n\tEnter data to insert at beginnig: ");
            scanf("%d", &item);
            insert_at_beg(item);
            break;
        }
        case 2:
        {
            printf("\n\tEnter data to insert at the end: ");
            scanf("%d", &item);
            insert_at_end(item);
            break;
        }
        case 3:
        {
            printf("\n\tEnter data to insert in a specific position: ");
            scanf("%d", &item);
            insert_in_middle(item);
            break;
        }
        case 4:
        {
            print_list();
            break;
        }
        case 5:
        {
            search_data();
            break;
        }
        case 6:
        {
            printf("\nProgram successfully exicuted.\n\n");
            exit(0);
            break;
        }
        }
    }
}

void print_list(void)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("\nError!! Memory failedf to allocate.!\n");
        return;
    }
    else
    {
        if (head == NULL)
        {
            printf("\nList is empty...! Please insert data first.\n\n");
            return;
        }
        else
        {
            temp = head;
            printf("\nData:-   ");
            while (temp != NULL)
            {
                printf("%d ---> ", temp->data);
                temp = temp->next;
            }
            printf("NULL\n");
        }
    }
}
void insert_at_beg(int item)
{
    node *ptr = (node *)malloc(sizeof(node));

    if (ptr == NULL)
    {
        printf("\nError!!! Unable to allocate emory!!!\n");
        return;
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            head->next = NULL;
            printf("\nData inserted at the front successfully.\n");
            return;
        }
        else
        {
            ptr->next = head;
            head = ptr;
            printf("\nData inserted at the front successfully.\n");
            return;
        }
    }
}
void insert_at_end(int item)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *temp = (node *)malloc(sizeof(node));
    if (ptr == NULL && temp == NULL)
    {
        printf("\nError!! Could not allocate memory!!!\n");
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = NULL;
            printf("\nData inserted at the end successfully.\n");
            return;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nData inserted at the end successfully.\n");

            return;
        }
    }
}

void insert_in_middle(int item)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *temp = (node *)malloc(sizeof(node));
    int pos;

    if (ptr == NULL)
    {
        printf("\nError! Couldn't allocate memory...!\n");
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            printf("\nThe list is empty!!! Please insert ata first.\n");
        }
        else
        {
            temp = head;
            printf("\nEnter the position after where you want to insert data:- ");
            scanf("%d", &pos);

            for (int i = 0; i < pos; i++)
            {
                temp = temp->next;

                if (temp == NULL)
                {
                    printf("\nError! Please, select a position within the list...!\n");
                    return;
                }
                else
                {
                    ptr->next = temp->next;
                    temp->next = ptr;
                    printf("\nData insertes at the position.\n");
                    return;
                }
            }
        }
    }
}

void search_data(void)
{
    int search_item, i = 1, q;
    printf("Please enter the search item:- ");
    scanf("%d", &search_item);

    node *temp;
    temp = head;

    if (temp == NULL)
    {
        printf("\nError! List is Empty...!!!\n");
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data == search_item)
            {
                printf("\nData is found...!!!\nData is at position %d.\n", i);
                q = 0;
                return;
            }
            else
            {
                q = 1;
                
            }
            temp = temp->next;
            i++;
        }
        if(q == 1)
        {
            printf("\n404, Data not found...!!!\n");
        }
    }
}