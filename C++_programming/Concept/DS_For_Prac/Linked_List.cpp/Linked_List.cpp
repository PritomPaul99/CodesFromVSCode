#include <iostream>

using namespace std;

typedef struct Node node;
struct Node
{
    int data;
    node *next;
};
node *head = NULL;

void printList();
void addFront(int d);
void AddEnd(int d);

int main()
{

    int n, d;

    while (true)
    {
        cout << "______________________Linked List______________________\n";
        cout << "Enter a option:" << endl
             << "01. Add in the end." << endl
             << "02. Add in the front." << endl
             << "10. Print List." << endl
             << "00. Exit." << endl
             << "Option? ";
        cin >> n;

        switch (n)
        {
        case 1:
        {
            cout << "Enter data: ";
            cin >> d;
            AddEnd(d);
            break;
        }
        case 2:
        {
            cout << "Enter data: ";
            cin >> d;
            addFront(d);
            break;
        }
        case 10:
        {
            cout << "\nList:-\n";
            printList();
            break;
        }
        case 0:
        {
            cout << "Program terminated.\n";
            exit(0);
        }
        default:
        {
            cout << "Enter valid option." << endl;
            break;
        }
            //end
        }
    }

    return 0;
}

void printList()
{
    if (head == NULL)
    {
        cout << "List is empty.\n";
    }
    else
    {
        node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

void AddEnd(int d)
{
    node *new_node = new node();
    new_node->data = d;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        cout << "Data inserted in the tail.\n";
        return;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        cout << "Data inserted in the tail.\n";
        return;
    }
}

void addFront(int d)
{
    node *new_node = new node();
    new_node->data = d;

    if (head == NULL)
    {
        head = new_node;
        head->next = NULL;
        cout << "Data inserted in the front.\n";
        return;
    }
    else
    {
        new_node->next = head;
        head = new_node;
        cout << "Data inserted in  the front.\n";
        return;
    }
}