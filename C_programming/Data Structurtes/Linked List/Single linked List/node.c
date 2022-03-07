#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    node *next;
}node;

node *head = NULL;

int main()
{
    head = (node *)malloc(sizeof(node));
}


