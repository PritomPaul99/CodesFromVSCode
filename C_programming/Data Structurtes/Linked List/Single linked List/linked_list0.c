#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;

    head = (Node *)malloc(sizeof(Node));

    head->data = 45;
    head->next = NULL;

    printf("1st data is: %d", head->data);

    return 0;
}