#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
//function print contents of linked list starting from the given node
void printList(struct Node*n){
    while(n!=NULL){
        printf("%d --> ",n->data);
        n=n->next;
    }
}
struct Node* head=NULL;

int main(){
    struct Node*firstNode = NULL;
    struct Node*secondNode = NULL;
    struct Node*thirdNode = NULL;

    firstNode=(struct Node*)malloc(sizeof(struct Node));
    secondNode=(struct Node*)malloc(sizeof(struct Node));
    thirdNode=(struct Node*)malloc(sizeof(struct Node));

    //assign data in first node and link first node with second node

    firstNode->data=1;
    firstNode->next=secondNode;

    //assign data in second node and link second node with third node

    secondNode->data=2;
    secondNode->next=thirdNode;

    thirdNode->data=3;
    thirdNode->next=NULL;

    head=firstNode;
    printList(head);
    return 0;
}