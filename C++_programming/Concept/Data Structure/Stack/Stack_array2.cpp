#include <iostream>

using namespace std;


#define MAX 10
int stack[MAX], top = -1;

bool isEmpty();
void push(int data);
void popData();
void printData();

int main()
{
    int data, ch;

    while (true)
    {
        cout << "____________Stack____________" << endl
             << "1. Push data." << endl
             << "2. Pop data." << endl
             << "3. Print data." << endl
             << "00. Exit." << endl
             << "Enter a option: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\nEnter data: ";
            cin >> data;
            push(data);
            break;
        case 2:
            popData();
            break;
        case 3:
            printData();
            break;
        case 00:
            cout << "\nExiting...\n\n";
            exit(0);
            break;
        default:
            cout << "\nPlease enter valid option...\n"
                 << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}

bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if (top == MAX)
    {
        return true;
    }
    return false;    
}
void push(int data)
{
    if (isFull())
    {
        cout << "\nStack is full!\n\n";
    }
    else
    {
        top++;
        stack[top] = data;
        cout << "\nData pushed.\n\n";
    }
}

void popData()
{
    int popped;
    if (isEmpty())
    {
        cout << "\nStack is empty!\n\n";
    }
    else
    {
        popped = stack[top];
        top--;
        cout << popped << " <- popped.\n";
    }
}
void printData()
{
    cout << "\nPrinting data:\n";
    for (int i = top; i != -1; i--)
    {
        cout << stack[i] << endl;
    }
}